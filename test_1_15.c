#include <stdio.h>

// int main()
// {
//     // int a = 0;//a是整型变量，占用4个字节空间
//     // int* pa = &a;
//     // // pa是一个指针变量，用来存放地址的

//     // //pa

//     // //本质上指针就是地址
//     // //口语中说的指针，其实就是指针变量，指针变量就是一个变量，指针变量是用来存放地址的一个变量
//     // return 0;
// }
// int main()
// {
//     // char* pc = NULL;
//     // char* ps = NULL;
//     // int * pi = NULL;
//     // double * pd = NULL;

//     //  printf("指针变量占用的字节数是: %d\n", sizeof(pc));
//     //  printf("指针变量占用的字节数是: %d\n", sizeof (ps));
//     //  printf("指针变量占用的字节数是: %d\n", sizeof (pi));
//     //  printf("指针变量占用的字节数是: %d\n", sizeof (pd));  
    
//     int a = 0x11223344;
//     // int *pa = &a;
//     // *pa = 0;
//     // printf("%zu\n", sizeof(a));
//     // printf("%zu\n", sizeof(pa));
//     // printf("a的值是: 0x%x\n", a);
//     // printf("pa的值是: 0x%p\n", pa);
//     // printf("pa指向的值是: 0x%x\n", *pa);
//     char* pc = (char*)&a;

//     return 0;
// }
// int my_strlen(char* str)
// {
//     int count = 0;
//     while (*str != '\0')
//     {
//         count++;
//         str++;
//     }
//     return count;
// }

// int  my_strlen(char* str)
// {
//     char* start = str;
//     while (*str != '\0')
//     {
//         str++;
//     }
//     return str-start;
// }
// int main()
// {
//     int len = my_strlen("hello world");
//     printf("字符串的长度是: %d\n", len);

//     return 0;
// }

int main()
{
    int arr[10] = {0};
    //arr是首元素地址
    //arr就是&arr[0]
    int *P = arr;
    //通过指针来访问数组
    int sz = sizeof(arr) / sizeof(arr[0]);
    int i = 0;

    for ( i = 0; i < sz; i++)
    {
        printf("%p ------%p\n", &arr[i], P + i);
    }
    
    // for (int i = 0; i < sz; i++)
    // {
    //     printf("%d ", *(P + i));
    // }
    return 0;
   

}