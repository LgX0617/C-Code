#include<stdio.h>

//二级指针
// int main()
// {
//     int a= 10;
//     int* pa = &a;//pa是一个指针变量，存放a的地址,一级指针变量
//     int ** ppa = &pa;//ppa是一个指针变量，存放pa的地址，二级指针变量
//     **ppa = 20;//通过ppa找到pa，再通过pa找到a，修改a的值为20
//     printf("a = %d\n", a);
//     // *pa = 20;
//     // printf("a = %d\n", a);
//     return 0;
// 

//指针数组
// int main()
// {
//     // int a = 10;
//     // int b = 20;
//     // int c = 30;
    
//     // int arr[10];
//     // int * pa = &a;
//     // int * pb = &b;
//     // int * pc = &c;

//     // int * parr[10] = {&a, &b, &c};//指针数组，存放指针的数组
//     // int i = 0;
//     // for ( i = 0; i < 3; i++)
//     // {
//     //     printf("%d\n", *(parr[i]));//通过指针数组访问变量的值
//     // }       
    
//     int arr1[4] = {1, 2, 3, 4};
//     int arr2[4] = {10, 20, 30, 40};
//     int arr3[4] = {100, 200, 300, 400};
//     int* parr[3] = {arr1, arr2,  arr3};//指针数组，存放数组的首地址
//     int i = 0;
//     for ( i = 0; i < 3; i++)
//     {
//         int j = 0;
//         for ( j = 0; j < 4; j++)
//         {
//             printf("%d ", parr[i][j]);//通过指针数组访问二维数组的元素
//             printf("%d ", *(parr[i] + j));
//         }
//         printf("\n");
//     }
//     return 0;
// }


// 结构体

// struct Student
// {
//     char name[20];
//     int age;
//     float score;
// }p1,p2;//定义结构体变量p1,p2(全局变量)


// struct Stu
// {
//     char name[20];
//     int age;
//     float score;
// };

// void print1(struct Stu* ps)//结构体指针作为函数参数
// {
//     printf("name: %s\n", ps->name);
//     printf("age: %d\n", ps->age);
//     printf("score: %.2f\n", ps->score);
// }       
// int main()
// {
//     struct Stu p1 = {"Alice", 20, 85.5};//定义结构体变量p1(局部变量)
//     print1(&p1);
//     return 0;
// }

// int count(unsigned int n)
// {
//     int count = 0;
//     while (n)
//     {
//         // if(n%2 == 1)
//         // count++;
//         // n = n / 2;
//         count += n & 1;
//         n = n >> 1;
//     }
//     return count;
// }
// int main()
// {
//     int num;
//     scanf("%d", &num);
//     int n = count(num);
//     printf("%d\n", n);
//     return 0;
// }
// int count(int m, int n)
// {
//     int count = 0;
//     // int i = 0;
//     // for(i =0; i <32;i++)     
//     // {
//     //    if(((m>>i) &1) != ((n>>i) &1))
//     //     {
//     //         count++;
//     //     }
//     // }
//     int xor = m ^ n;
//     while (xor)
//     {
//         xor &= (xor - 1);
//         count++;
//     }
//     return count;
// }

// int main()
// {
//     int m = 0, n = 0;
//     scanf("%d %d", &m, &n);
//     int x = count(m,n);
//     printf("%d\n", x);  

//     return 0;
// }

// int main()
// {
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     int num = 0;
//     scanf("%d",&num);
//     //偶数位
//     for(i=1;i<32;i+=2)
//     {
//             printf("%d",(num>>i)&1);
//     }
//     printf("\n");
//     //奇数位
//     for(i=0;i<32;i+=2)//0000000000001010
//     {
//             printf("%d",(num>>i)&1);
//     }
//     return 0;
// }

// int main()
// {
//     int n = 0;
//     while(scanf("%d",&n) == 1)
//     {
//         int i = 0;
//         int j = 0;
//         for(i=0; i<n; i++)
//         {
//             for(j=0;j<n;j++)
//             {
//                 if(j==i){
//                     printf("*");
//                 }
//                 else if(i+j == n-1){
//                     printf("*");
//                 }
//                 else  printf(" ");
//             }
//             printf("\n");
//         }
//     }
//     return 0;
// }


int main()
{
    int i =0;
    int arr[10]={0};
    for(i=0;i<10;i++)
    {
        arr[i]=i;
    }

    for(i=0;i<10;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}