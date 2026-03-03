#include<stdio.h>
#include<stddef.h>
//结构体类型的定义

//学生

// struct Stu
// {
//     //学生的相关属性
//     char name[20];
//     int age;
// }s1,s2;


// int main()
// {
//     struct Stu s3;
//     return 0;
// }

// //匿名结构体类型
// //只能使用一次
// struct 
// {
//     //学生的相关属性
//     char name[20];
//     int age;
// }s1;

// int main()
// {
//     return 0;

// }

// struct n
// {
//     int data;
//     struct n* next;
// };

// struct S1
// {
//     char c1;
//     int i;
//     char c2;
// };

// struct S2
// {
//     char c1;
//     char c2;
//     int i;

// };

// int main()
// {
//     // printf("%d\n",sizeof(struct S1));
//     // printf("%d\n",sizeof(struct S2));

    
//     printf("%d\n",offsetof(struct S1,c1));
//     printf("%d\n",offsetof(struct S1,i));
//     printf("%d\n",offsetof(struct S1,c2));

//      printf("%d\n",offsetof(struct S2,c1));
//     printf("%d\n",offsetof(struct S2,i));
//     printf("%d\n",offsetof(struct S2,c2));
//     return 0;
// }
// #pragma pack(4)
// struct S
// {

//     int i;
//     double d;

// };
// #pragma pack()
// int main()
// {
//     printf("%d\n",sizeof(struct S));
//     return 0;
// }