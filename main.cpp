
#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int split(char* s){
    int n=0,t=0;
    char *argv[]={"","", NULL};
    char *m=(char*)malloc(sizeof(char)*7);
    for(int i=0;i<sizeof(s);i++){
        cout<<s[i]<<endl;
        if (s[i]==' '){
            n=0;
            cout<<m<<endl;
            argv[t]=m;
            t++;
        }
        m[n]=s[i];
        n++;
    }
    //cout<<argv[0]<<endl;
    cout<<argv[1]<<endl;
    for (int i = 0; i < 2; ++i) {
        cout<<argv[i]<<endl;
    }
}
int execve1(char* s)
{
    char *argv[]={s, NULL};

    char *envp[]={0,NULL}; //传递给执行文件新的环境变量数组

    execve("/bin/ls",argv,envp);
    exit(0);

}
int fork1(){
    bool isre=true;
    pid_t pid, pr;
    pid=fork();
    char *s=(char*)malloc(sizeof(char)*20);
    if(pid<0) /* 如果fork出错 */
        printf("Error occured on forking.\n");
    else if(pid==0){ /* 如果是子进程 */
        while (isre) {
            cout << "? ";
            cin >> s;

            if (s[0] == 'e' && s[1] == 'x' && s[2] == 'i' && s[3] == 't') {
                isre= false;
                break;
            }
            execve1(s);

        }

    }else if(pid>0){
        while (isre){
        }

    }
    return 0;
}


int main() {
    fork1();
    return 0;
}


/*#include<unistd.h>
#include <iostream>
using namespace std;

int main(int arg, char **args)
{
    char *s=(char*)malloc(sizeof(char)*20);
    cin>>s;
    cout<<s<<endl;
    char *argv[]={s, NULL};

    char *envp[]={0,NULL}; //传递给执行文件新的环境变量数组

    execve("/bin/ls",argv,envp);

}*/
