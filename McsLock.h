//
// Created by wy on 2021/7/30.
//

#ifndef UNTITLED5_MCSLOCK_H
#define UNTITLED5_MCSLOCK_H


#include <pthread.h>
#include <stdio.h>
#include <iostream>
#include <atomic>
#include <unistd.h>

class McsThreadQueue {
private:
    McsThreadQueue* next;
    pthread_t tid;
public:
    int state;
    McsThreadQueue() {
        next = nullptr;
        state = 0;
    }

    void setTid(pthread_t tid) {
        this->tid = tid;
    }

    pthread_t getTid() {
        return tid;
    }

    void setState(int state) {
        this->state = state;
    }

    void setMcs(McsThreadQueue* mtq) {
        next = mtq;
    }

    McsThreadQueue* getMcs() {
        return next;
    }
};

McsThreadQueue* head;
McsThreadQueue* tail;


void theMcsThreadQueueLock() {
    if(__sync_bool_compare_and_swap(&head->state,0,1)) {  // 没阻塞线程 有阻塞线程进来
        head->setTid(getpid());
        head->setMcs(new McsThreadQueue());
        tail = head->getMcs();
        tail->setState(1);
//        std::cout << "lock success\t";
    } else {//有阻塞线程 向后插入
        McsThreadQueue *mtqself = tail;
        tail = tail->getMcs();
        tail = new McsThreadQueue();
        tail->state = 1;
        mtqself->setTid(getpid());

        for (;;) {
            if (mtqself->state == 0)
                break;
        }
        head->setTid(mtqself->getTid());
        head->setMcs(mtqself->getMcs());
//        std::cout << "lock failed then success\t";
    }
}

void theMcsThreadQueueUnlock() {
    if(head->getMcs() == nullptr) {
        __sync_bool_compare_and_swap(&head->state,1,0);
    } else {
        head->getMcs()->setState(0);
        head->setMcs(head->getMcs()->getMcs());
    }
}

void* runable(void*) {
    theMcsThreadQueueLock();
    std::cout << "runable\n";
    theMcsThreadQueueUnlock();
}

void* threadRun(void*) {
    if(__sync_bool_compare_and_swap(&head->state,0,1)) {
        head->setTid(getpid());
        head->setMcs(new McsThreadQueue());
        tail = head->getMcs();
        tail->setState(1);

        std::cout << "runable\n";

        if(head->getMcs() == nullptr) {
            __sync_bool_compare_and_swap(&head->state,1,0);
        } else {
            head->getMcs()->setState(0);
            head->setMcs(head->getMcs()->getMcs());
        }
    } else {
        McsThreadQueue* mtqself = tail;
        mtqself->setTid(getpid());

        for(;;) {
            if(mtqself->state == 0)
                break;
        }
        head->setTid(mtqself->getTid());
        head->setMcs(mtqself->getMcs());

        std::cout << "runable\n";

        if(head->getMcs() == nullptr) {
            __sync_bool_compare_and_swap(&head->state,1,0);
        } else {
            mtqself = head->getMcs();
            head->setMcs(head->getMcs()->getMcs());
            mtqself->setState(0);
        }
    }
}

void run() {
    head = new McsThreadQueue();
    tail = head;

    pthread_t tid[10];
    for (int i=0;i<10;i++) {
        int iRet = pthread_create(&tid[i],NULL,runable,NULL);
        if(iRet) {
            printf("error:iRet=%d",iRet);
            exit(1);
        }
    }

    for (int i=0;i<10;i++) {
        void* re;
        int iRet = pthread_join(tid[i],&re);
        if(iRet) {
            printf("error:iRet=%d\n",iRet);
            exit(1);
        }
    }

    sleep(2);
}

#endif //UNTITLED5_MCSLOCK_H