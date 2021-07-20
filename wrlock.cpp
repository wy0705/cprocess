//
// Created by wy on 2021/7/20.
//

#include <iostream>
#include <pthread.h>
#include <unistd.h>

using namespace std;
pthread_cond_t qready = PTHREAD_COND_INITIALIZER;    /*初始构造条件变量*/
pthread_mutex_t qlock = PTHREAD_MUTEX_INITIALIZER;    /*初始构造锁*/
int w = 0;
int r = 0;
void wlock(){
    pthread_mutex_lock(&qlock);
    while(w!=0||r>0)
    {
        pthread_cond_wait(&qready,&qlock);//waitnotify  什么时候唤醒，唤醒并加上锁往下执行
    }
    w=1;
    pthread_mutex_unlock(&qlock);
}
void unwlock(){
    pthread_mutex_lock(&qlock);
    w=0;
    pthread_mutex_unlock(&qlock);

    pthread_cond_signal(&qready);//唤醒
}
void rlock(){
    pthread_mutex_lock(&qlock);
    while(w=0)
    {
        pthread_cond_wait(&qready,&qlock);//waitnotify  什么时候唤醒，唤醒并加上锁往下执行
    }
    w=1;
    pthread_mutex_unlock(&qlock);
}