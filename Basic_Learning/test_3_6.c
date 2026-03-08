
//枚举
//枚举类型的定义
#include<stdio.h>

// enum Day//星期
// {
//     //枚举常量
//     Mon,
//     Tues,
//     Wed,
//     Thur,
//     Fri,
//     Sat,
//     Sun
// };

// enum Day//星期
// {
//     //枚举常量
//     Mon=1,
//     Tues,
//     Wed,
//     Thur,
//     Fri,
//     Sat,
//     Sun
// };
// int main()
// {
//     // enum Day d = Wed;
//     printf("%d\n",Mon);
//     printf("%d\n",Tues);
//     printf("%d\n",Wed);

//     return 0;
// }


//联合(共用体)

// union Un
// {
//     char c;
//     int i;
// };

// struct St
// {
//     int a;
//     char c;

// };
// int main()
// {
//     union Un u;
//     u.i = 0x11223344;
//     u.c = 0x00;
//     struct St n;
//     printf("%d\n",sizeof(u));
//     printf("%d\n",sizeof(n));   

//     printf("%p\n",&u);
//     printf("%p\n",&(u.c));
//     printf("%p\n",&(u.i));
//     return 0;

// }


//判断当前计算机的大小端存储

// int check_sys()
// {
//     int a = 1;
//     return *(char*)&a;
// }

// int check_sys()
// {
//     //匿名类型
//     union 
//     {
//         char c;
//         int i;
//     }u;
//     u.i = 1;
//     //返回1是小端，返回0是大端
//     return u.c;

// }
// //1
//  int main()
//  {
//     // int a = 1;//0x 00 00 00 01
//     int ret = check_sys();
//     if(ret == 1)
//     {
//         printf("小端\n");

//     }
//     else
//         printf("大端\n");

//     return 0;

//  }

// union Un
// {
//     char arr[5];
//     int a;
// };

// int main()
// {
//     printf("%d\n",sizeof(union Un));
//     return 0;
    
// }