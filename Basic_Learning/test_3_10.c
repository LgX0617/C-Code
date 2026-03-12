#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// char* GetMemory(void)
// {
//     //返回栈空间的地址的问题
//     char p[] = "hello world";
//     return p;

// }

// void Test(void)
// {
//     char* str = NULL;
//     str = GetMemory();
//     printf(str);
// }
// int main()
// {
//     Test();
//     return 0;
// }

// void GetMemory(char** p, int num)
// {
//     *p = (char*)malloc(num);

// }
// void Test(void)
// {
//     char* str = NULL;
//     GetMemory(&str,100);
//     strcpy(str,"hello");
//     printf(str);
//     free(str);
//     str = NULL;
// }

// int main()
// {
//     Test();
//     return 0;
// }

// void Test(void)
// {
//     char* str = (char*)malloc(100);
//     strcpy(str,"hello");
//     free(str);
//     if(str != NULL)
//     {
//         //str是野指针了;
//         strcpy(str,"world");
//         printf(str);
//     }
// }

// int main()
// {
//     Test();
//     return 0;
// }

// 柔性数组

//   typedef struct st_type
//   {
//     int i;
//     int a[0];//柔性数组成员
//   }type_a;

// struct S
// {
//     int n;
//     int arr[];
// };

// int main()
// {
//     int sz = sizeof(struct S);
//     printf("%d\n", sz);

//     // 柔性数组的使用
//     struct S *ps = (struct S *)malloc(sizeof(struct S) + 40);
//     if(ps == NULL)
//     {
//         return 1;
//     }
//     ps->n = 100;
//     int i = 0;
//     for (i = 0; i < 10; i++)
//     {
//         ps->arr[i] = i;
//     }
//     for (i = 0; i < 10; i++)
//     {
//         printf("%d", ps->arr[i]);
//     }
//     struct S *ptr = (struct S *)realloc(ps, sizeof(struct S) + 80);
//     if (ptr != NULL)
//     {
//         ps = ptr;
//     }

//     //...
//     free(ps);
//     ps = NULL;

//     return 0;
// }

// struct S
// {
//     int n;
//     int *arr;
// };

// int main()
// {
//     struct S *ps = (struct S *)malloc(sizeof(struct S));
//     if (NULL == ps)
//     {
//         return 1;
//     }

//     ps->n = 10;
//     ps->arr = (int *)malloc(40);
//     if (ps->arr == NULL)
//     {
//         return 1;
//     }
//     //....
//     int i = 0;
//     for (i = 0; i < 10; i++)
//     {
//         ps->arr[i] = i;
//         printf("%d\n", ps->arr[i]);
//     }

//     free(ps->arr);
//     free(ps);
//     ps = NULL;

//     return 0;
// }