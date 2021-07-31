//
// Created by wy on 2021/7/31.
//

#ifndef UNTITLED5_MYMCSLOCK_H
#define UNTITLED5_MYMCSLOCK_H
#include <pthread.h>
#include <stdio.h>
#include <iostream>
#include <atomic>
#include <unistd.h>
#include "pthread.h"


class McsThreadBlock {
private:
    McsThreadBlock* next;
    pthread_t tid;
public:
    int state;
    McsThreadBlock():state(0) {
        next = nullptr;
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

    void setMcs(McsThreadBlock* mtq) {
        next = mtq;
    }

    McsThreadBlock* getMcs() {
        return next;
    }

    void setNextState(int nextstate){
        next->setState(nextstate);
    }
};

McsThreadBlock* head;
McsThreadBlock* tail;

//自旋
void* spin(void *p){
    while (true){
        if (head->state==0) {
            pthread_join(head->getTid(), NULL);
            std::cout << head->getTid() << "该线程已执行！" << std::endl;
            break;
        }
    }
    head=head->getMcs();
}

void McsLock(){

    if (__sync_bool_compare_and_swap(&head->state,0,1)) {//头为空
        //std::cout<<"aaa"<<std::endl;
        //初始化
        if (head == tail) {
            std::cout<<"初始化成功！"<<std::endl;
            head->setTid(getpid());
            head->setMcs(new McsThreadBlock);
            head->setNextState(1);
            tail = head->getMcs();
        } else
            std::cout<<"！"<<std::endl;

    } else{//头不为空
        //尾插

        if (tail->state==1){
            std::cout<<"有一个线程进入mcs队列"<<std::endl;
            tail->setTid(getpid());
            tail->setMcs(new McsThreadBlock);
            tail->setNextState(1);
            tail=tail->getMcs();
        } else
            std::cout<<"最后一个在执行状态！"<<std::endl;
    }
    pthread_t t;
    pthread_create(&t, NULL, spin, NULL);
    pthread_detach(t);
    pthread_join(t,NULL);
    //spin();
}

void McsUnLock(){

    if (__sync_bool_compare_and_swap(&head->state,1,0)){
        //pthread_t* pthread=head->getTid();
        //pthread_join(head->getTid(), NULL);
        std::cout<<head->getTid()<<"该线程进入可执行状态！"<<std::endl;
    }else{
        std::cout<<head->getTid()<<"mcs的第一个线程还不能运行！"<<std::endl;
    }

}

void Mcsinit(){
    head=new McsThreadBlock;
    tail=head;
}
#endif //UNTITLED5_MYMCSLOCK_H
