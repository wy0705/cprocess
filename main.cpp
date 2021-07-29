
#include <iostream>
#include <unistd.h>
#include <stdlib.h>
//#include <stdio.h>
#include <vector>
#include<string>
#include <cstring>
#include <sys/wait.h>


using namespace std;

//int execve1(vector<string> lines)
//{
//    /*const char *argv[lines.size()+1];
//    for (int i = 0; i < lines.size(); ++i) {
//        argv[i]=lines[i].c_str();
//    }
//    argv[lines.size()]="NULL";
//
//    char *argv1[lines.size()+1];
//    for (int i = 0; i < lines.size()+1; ++i) {
//        //argv1[i]=argv[i];
//        cout<<argv[i]<<endl;
//        char* pc =new char[sizeof(argv[i])];
//        strcpy(pc,argv1[i]);
//        argv1[i]=pc;
//    }*/
//    char *argv[lines.size()+1];
//    char* c;
//    for (int i = 0; i < lines.size(); ++i) {
//        const int len=lines[i].length();
//        c=new char[len+1];
//        strcpy(c,lines[i].c_str());
//        argv[i]=c;
//    }
//    argv[lines.size()]=NULL;
//
//
//    const char *path="/bin/ls";
//    if (lines[0]=="ls")
//        path="/bin/ls";
//    else if (lines[0]=="pwd")
//        path="/bin/pwd";
//
//    cout<<path<<endl;
//    char *envp[]={0,NULL}; //传递给执行文件新的环境变量数组
//
//    execve(path,argv,envp);
//    exit(0);
//
//}
//
//
//vector<string> split(string str,string pattern) {
//    string::size_type pos;
//    vector<string> result;
//    str+=pattern;  //扩展字符串以方便操作
//    int size=str.size();
//    for(int i=0;i<size;i++) {
//        pos=str.find(pattern,i);
//        if(pos<size) {
//            string s=str.substr(i,pos-i);
//            result.push_back(s);
//            i=pos+pattern.size()-1;
//        }
//    }
//    return result;
//}
//
//
//int fork1(){
//    bool isre=true;
//    pid_t pid, pr;
//    char *s=(char*)malloc(sizeof(char)*20);
//    while (isre) {
//    pid=fork();
//
//    if(pid<0) /* 如果fork出错 */
//        printf("Error occured on forking.\n");
//    else if(pid==0){ /* 如果是子进程 */
//
//            cout<<"? ";
//            string s;
//            getline(cin,s);
//            cout<<s<<endl;
//            if (s=="exit"){
//                cout<<"结束退出！"<<endl;
//                isre=false;
//                return 1;
//            }
//            vector<string> lines;
//            lines = split(s," ");
//            execve1(lines);
//
//
//    }else if(pid>0){
//        //while (isre){}
//        pid_t pr=wait(NULL);
//        printf("aaaaa %d\n",pr);
//
//    }
//    }
//    return 0;
//}
//
//
//
//
//

#include <stdio.h>



struct User;
void display(User* user);
struct User{
    int id;
    char* name;
    void (*dp)(User*)=display;
};
void display(User* user){
    printf("User id:%d\n",user->id);
    printf("User name:%s\n",user->name);
}
int main(){
    User user;
    user.id=1;
    user.name="wangying";
    user.dp(&user);
    return 0;
}






