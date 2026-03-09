

#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
//类型声明

//人的信息
typedef struct PeoInfo
{
    char name[MAX_NAME];
    int age;
    char sex[MAX_SEX];
    char tele[MAX_TELE];
    char addr[MAX_ADDR];
}  PeoInfo;


//通讯录

//静态版本
// typedef struct Contact
// {
//     PeoInfo data[MAX];//存放人的信息
//     int count;//记录通讯录中实际人数
// }Contact;

//动态版本
typedef struct Contact
{
    PeoInfo* data;//存放人的信息
    int count;//记录通讯录中实际人数
    int capacity;//当前通讯录容量
}Contact;

//初始化通讯录
void InitContact(Contact* pc);

//销毁通讯录
void DestroyContact(Contact* pc);

//添加通讯录联系人
void AddContact(Contact* pc);

//打印通讯录信息
void ShowContact(const Contact* pc);

//删除指定联系人
void DelContact(Contact* pc);

//查找指定联系人
void SearchContact(Contact* pc);

//修改指定联系人
void ModifyContact(Contact* pc);

//排序通讯录中的内容
 void SortContact(Contact* pc);
