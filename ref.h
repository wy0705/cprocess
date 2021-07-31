//
// Created by wy on 2021/7/31.
//

#ifndef UNTITLED5_REF_H
#define UNTITLED5_REF_H
#include<string>

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
Stu* toStu(std::string s);
//Method* getFun(string s);
struct Toclass{
    //少继承obj
    Stu* (*forname)(std::string s)=toStu;
    Method* (*getFun)(std::string s)=getFun;
};
Stu* toStu(std::string s){
    printf("生成一个%s对象",&s);//少一个map(补)
    Stu* stu=(Stu*)malloc(sizeof(Stu));
}
/*Method* getFun(string s){
    printf("生成一个%s方法",&s);
    Method m=tosay;
}*/

#endif //UNTITLED5_REF_H

/*User user;
   user.id=1;
   user.name="wangying";
   user.dp(&user);*/

/*Toclass toclass;
Stu* stu=toclass.forname("Stu");
Method* m=toclass.getFun("tosayStu");
stu->age=12;
stu->name="wangying";
stu->id=1;
m->say(stu);*/