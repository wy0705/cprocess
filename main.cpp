
#include <iostream>
#include <unistd.h>
#include <stdlib.h>
//#include <stdio.h>
#include <vector>
#include<string>
#include <cstring>
#include <sys/wait.h>
#include "pthread.h"

using namespace std;



#include <stdio.h>
#include "MyMcsLock.h"




int sum = 0;

void* adder(void *p)
{
    for(int i = 0; i < 1000000; i++)  // 百万次
    {
        sum++;
     }

    return NULL;
}
int main(){
    Mcsinit();
    pthread_t threads[10];
    for(int i = 0; i < 10; i++)
    {
        pthread_create(&threads[i], NULL, adder, NULL);
    }
    for(int i = 0; i < 10; i++)
    {
        McsLock(threads[i]);
    }
    for(int i = 0; i < 10; i++)
    {
        McsUnLock();
    }
    printf("sum is %d\n", sum);


    return 0;
}






