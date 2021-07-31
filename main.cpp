
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
    for(int i = 0; i < 10; i++)
    {
        McsLock();
        sum++;
        McsUnLock();
     }

    return NULL;
}
int main(){
    Mcsinit();
    pthread_t threads[10];
    for(int i = 0; i < 10; i++)
    {
        pthread_create(&threads[i], NULL, adder, NULL);
        pthread_detach(threads[i]);
    }
    cout<<"aaa"<<endl;
    for(int i = 0; i < 10; i++)
    {
        pthread_join(threads[i],NULL);
        cout<<"b"<<endl;
    }

    printf("sum is %d\n", sum);


    return 0;
}



/*
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int sum = 0;
pthread_mutex_t mutex;

void* adder(void *p)
{
    for(int i = 0; i < 10; i++)
    {
        pthread_mutex_lock(&mutex);
        sum++;
        pthread_mutex_unlock(&mutex);
    }
    return NULL;
}

int main()
{
    pthread_t threads[10];
    pthread_mutex_init(&mutex, NULL);
    for(int i = 0; i < 10; i++)
    {
        pthread_create(&threads[i], NULL, adder, NULL);
    }
    for(int i = 0; i < 10; i++)
    {
        pthread_join(threads[i],NULL);
    }

    printf("sum is %d\n", sum);
}


*/
