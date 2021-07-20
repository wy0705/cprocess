
#include <iostream>
#include <unistd.h>
#include <stdlib.h>
//#include <stdio.h>
#include <vector>
#include<string>
#include <cstring>
#include <sys/wait.h>


using namespace std;

int execve1(vector<string> lines)
{
    /*const char *argv[lines.size()+1];
    for (int i = 0; i < lines.size(); ++i) {
        argv[i]=lines[i].c_str();
    }
    argv[lines.size()]="NULL";

    char *argv1[lines.size()+1];
    for (int i = 0; i < lines.size()+1; ++i) {
        //argv1[i]=argv[i];
        cout<<argv[i]<<endl;
        char* pc =new char[sizeof(argv[i])];
        strcpy(pc,argv1[i]);
        argv1[i]=pc;
    }*/
    char *argv[lines.size()+1];
    char* c;
    for (int i = 0; i < lines.size(); ++i) {
        const int len=lines[i].length();
        c=new char[len+1];
        strcpy(c,lines[i].c_str());
        argv[i]=c;
    }
    argv[lines.size()]=NULL;


    const char *path="/bin/ls";
    if (lines[0]=="ls")
        path="/bin/ls";
    else if (lines[0]=="pwd")
        path="/bin/pwd";

    cout<<path<<endl;
    char *envp[]={0,NULL}; //传递给执行文件新的环境变量数组

    execve(path,argv,envp);
    exit(0);

}


vector<string> split(string str,string pattern) {
    string::size_type pos;
    vector<string> result;
    str+=pattern;  //扩展字符串以方便操作
    int size=str.size();
    for(int i=0;i<size;i++) {
        pos=str.find(pattern,i);
        if(pos<size) {
            string s=str.substr(i,pos-i);
            result.push_back(s);
            i=pos+pattern.size()-1;
        }
    }
    return result;
}


int fork1(){
    bool isre=true;
    pid_t pid, pr;
    char *s=(char*)malloc(sizeof(char)*20);
    while (isre) {
    pid=fork();

    if(pid<0) /* 如果fork出错 */
        printf("Error occured on forking.\n");
    else if(pid==0){ /* 如果是子进程 */

            cout<<"? ";
            string s;
            getline(cin,s);
            cout<<s<<endl;
            if (s=="exit"){
                cout<<"结束退出！"<<endl;
                isre=false;
                return 1;
            }
            vector<string> lines;
            lines = split(s," ");
            execve1(lines);


    }else if(pid>0){
        //while (isre){}
        pid_t pr=wait(NULL);
        printf("aaaaa %d\n",pr);

    }
    }
    return 0;
}


//string[] 转char*[]
/*string s;
getline(cin,s);
cout<<1<<endl;
cout<<s<<endl;
vector<string> lines;
lines = split(s," ");
for (int i = 0; i < lines.size(); ++i) {
cout<<lines[i]<<endl;
}
const char *argv[lines.size()+1];
for (int i = 0; i < lines.size(); ++i) {
argv[i]=lines[i].c_str();
}
argv[lines.size()]="NULL";
for (int i = 0; i < lines.size()+1; ++i) {
cout<<argv[i]<<endl;
}*/

//int main() {
//    fork1();
//    /*char *argv[]={"pwd", NULL};
//
//    char *envp[]={0,NULL}; //传递给执行文件新的环境变量数组
//
//    execve("/bin/pwd",argv,envp);*/
//    return 0;
//}


//
// Created by andilyliao on 17-8-10.
//
#include<stdio.h>
#include<signal.h>
#include<sys/types.h>
#include<unistd.h>

void SigHandler(int iSignNum)
{
    printf("signal:%d\n",iSignNum);
}

int main()
{
    signal(SIGALRM,SigHandler);
    alarm(1);
    printf("before pause \n");
    /*
     * 当程序运行时，pause会使当前的进程挂起（进入睡眠状态），
     * 直到我们向该进程发送SIGINT中断信号，进程才会被唤醒，
     * 并处理信号，处理完信号后pause函数才返回，并继续运行该程序。

      任何信号都可使pause唤醒。
     */
    pause();//非可屏蔽中断
    printf("after pause \n");
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

