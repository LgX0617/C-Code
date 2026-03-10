#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

//对NULL指针的解引用操作
// int main()
// {
//     int* p = (int*)malloc(40);
//     if(p == NULL)
//     {
//         return 1;
//     }
//     *p = 20;
//     free(p);
//     p = NULL;

//     return 0;
// }

//对动态内存空间的越界访问
// int main()
// {
//     int* p = (int*)malloc(40);
//     if(p == NULL )
//     {
//         printf("%s\n",strerror(errno));
//         return 1;
//     }
//     int i = 0;
//     for(i=0;i <=10;i++)
//     {
//         p[i] = i;

//     }
//     free(p);
//     p = NULL;
//     return 0;
// }

//对非动态开辟内存使用free释放

// int main()
// {
//     int a= 10;
//     int* p =&a;
//     //.....

//     free(p);
//     p = NULL;
//     return 0;
// }

//使用free释放一块动态内存的一部分
// int main()
// {
//     int* p = (int*)malloc(40);
//     if (p == NULL)
//     {
//         return 1;

//     }
    
//     int i= 0;
//     for(i = 0;i<10;i++)
//     {
//         p[i] = i;
//         // *p = i;
//         // p++;//错误写法❌
//     }
   
//     free(p);
//     p=NULL;
//     return 0;
// }

// void GetMemory(char** p)
// {
//     *p = (char*)malloc(100);
// }
// void Test(void)
// {
//     char* str = NULL;
//     GetMemory(&str);
//     strcpy(str,"hello world");
//     printf(str);
//     free(str);
//     str = NULL;
// }
// int main()
// {
//     Test();
//     return 0;
// }

// int main()
// {
//     char* p = "hello world\n";
//     printf(p);
//     printf("%s",p);
//     return 0;
// }