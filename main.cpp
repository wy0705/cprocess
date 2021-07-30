
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

struct Stu;
struct Tea;
//typedef void (*Method)(Stu* stu);
void tosay(Stu* stu);
struct Stu{
    int id;
    char* name;
    int age;
    //void (*say)(Stu*)=tosay;
};
struct Tea{
    int id;
    char* name;
    int age;
};
void tosayStu(Stu* stu){
    printf("Student id:%d\n",stu->id);
    printf("Student name:%s\n",stu->name);
    printf("Student age:%d\n",stu->age);

}
void tosayTea(Stu* stu){
    printf("Teacher id:%d\n",stu->id);
    printf("Teacher name:%s\n",stu->name);
    printf("Teacher age:%d\n",stu->age);

}
struct Method;
struct Method{
    void (*say)(Stu*)=tosayStu;
};


struct Toclass;
Stu* toStu(string s);
//Method* getFun(string s);
struct Toclass{
    //少继承obj
    Stu* (*forname)(string s)=toStu;
    Method* (*getFun)(string s)=getFun;
};
Stu* toStu(string s){
    printf("生成一个%s对象",&s);//少一个map(补)
    Stu* stu=(Stu*)malloc(sizeof(Stu));
}
/*Method* getFun(string s){
    printf("生成一个%s方法",&s);
    Method m=tosay;
}*/
int main(){
    /*User user;
    user.id=1;
    user.name="wangying";
    user.dp(&user);*/

    Toclass toclass;
    Stu* stu=toclass.forname("Stu");
    Method* m=toclass.getFun("tosayStu");
    stu->age=12;
    stu->name="wangying";
    stu->id=1;
    m->say(stu);




    return 0;
}






