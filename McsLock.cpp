////
//// Created by wy on 2021/7/30.
////
//
//#include <pthread.h>
//#include <stdio.h>
//#include <iostream>
//#include <atomic>
//#include <unistd.h>
//
//
//class McsThreadBlock {
//private:
//    McsThreadBlock* next;
//    pthread_t tid;
//public:
//    int state;
//    McsThreadBlock() {
//        next = nullptr;
//        state = 0;
//    }
//
//    void setTid(pthread_t tid) {
//        this->tid = tid;
//    }
//
//    pthread_t getTid() {
//        return tid;
//    }
//
//    void setState(int state) {
//        this->state = state;
//    }
//
//    void setMcs(McsThreadBlock* mtq) {
//        next = mtq;
//    }
//
//    McsThreadBlock* getMcs() {
//        return next;
//    }
//
//    void setNextState(int nextstate){
//        next->setState(nextstate);
//    }
//};
//
//McsThreadBlock* head=new McsThreadBlock;
//McsThreadBlock* tail=head;
//
////自旋
//void spin(){
//    while (true){
//        if (head->state==0) {
//            pthread_join(head->getTid(), NULL);
//            std::cout << head->getTid() << "该线程已执行！" << std::endl;
//            break;
//        }
//    }
//    head=head->getMcs();
//}
//
//void McsLock(pthread_t pthread){
//    if (__sync_bool_compare_and_swap(&head->state,0,1)) {//头为空
//        //初始化
//        if (head == tail) {
//            std::cout<<"初始化成功！"<<std::endl;
//            head->setTid(pthread);
//            head->setMcs(new McsThreadBlock);
//            head->setNextState(1);
//            tail = head->getMcs();
//        } else
//            std::cout<<"初始化不成功！"<<std::endl;
//
//    } else{//头不为空
//        //尾插
//        if (tail->state==1){
//            tail->setTid(pthread);
//            tail->setMcs(new McsThreadBlock);
//            tail->setNextState(1);
//            tail=tail->getMcs();
//        } else
//            std::cout<<"最后一个在执行状态！"<<std::endl;
//    }
//    spin();
//}
//
//void McsUnLock(){
//    if (__sync_bool_compare_and_swap(&head->state,1,0)){
//        //pthread_t* pthread=head->getTid();
//        //pthread_join(head->getTid(), NULL);
//        std::cout<<head->getTid()<<"该线程进入可执行状态！"<<std::endl;
//    }else{
//        std::cout<<head->getTid()<<"mcs的第一个线程还不能运行！"<<std::endl;
//    }
//
//}
//
//void Mcsinit(){
//    head=new McsThreadBlock;
//    tail=head;
//}
//
