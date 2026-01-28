#include <stdio.h>

// int main()
// {
//     // char ch = 'w';
//     // char* pc = &ch;
//     // *pc = 'b';
//     // printf("%c\n", ch);

//         const char* p = "abcdef";//把字符串首字符a的地址赋值给p
//         // *p = 'w';//试图修改字符串常量，未定义行为
//         printf("%s",p);


//         return 0;

// }

// int main()
// {
//     const char* p1 = "abcdef";
//     const char* p2 = "abcdef";

//     char arr1[] = "abcdef";
//     char arr2[] = "abcdef";


//     if(p1 == p2)
//         printf("p1 == p2 \n");
//     else
//         printf("p1 != p2 \n");

//     if(arr1 == arr2)
//         printf("arr1 == arr2 \n");  
//     else
//         printf("arr1 != arr2 \n");  
//     return 0;
// }

// int main ()
// {

//     int arr1[] = {1,2,3,4};
//     int arr2[] = {2,3,4,5};
//     int arr3[] = {3,4,5,6};

//     int * parr[3] = {arr1,arr2,arr3};

//     int i = 0;
//     for(i = 0;i < 3;i++)
//     {
//         int j = 0;
//         // for(j = 0;j < 4;j++)
//         // {
//         //     printf("%d ",parr[i][j]);
//         // }
//         //*(p+i)  == p[i]
//         for(j = 0;j < 4;j++)
//         {
//             printf("%d ",*(parr[i] + j));
//         }
//         printf("\n");
//     }



//     return 0;
// }

// int main ()
// {
//     int arr[10];
//     int *p = arr;

//     //数组指针
//     int (*p2)[10] = &arr;
//     return 0;
// }

// int main ()
// {
//     char* arr[5] = {0};
//     int (*pc)[5] = &arr;
// }

// int main ()
// {
//     int arr[] = {1,2,3,4,5};
//     int *p = arr;
//     int i =0;
//     for(i = 0;i < 5;i++)
//     {
//         printf("%d ",*(p+i));
//     }

    // int (*p)[5] = &arr;

    // int i = 0;
    // int sz = sizeof(arr)/sizeof(arr[0]);
    // for(i = 0;i < sz;i++)
    // {
    //     // printf("%d ",(*p)[i]);
    //     printf("%d",*(*p+i));//p是指向数组的，*p是数组名，是数组首元素地址

    // }
//     return 0;
// }

// void print1(int arr[3][5],int r,int c)
// {
//     int i = 0;
//     for(i = 0;i < r;i++)
//     {
//         int j = 0;
//         for(j = 0;j < c;j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// void print2(int (*arr)[5], int r, int c)
// {
//     int i = 0;
//     for (i = 0;i<r;i++)
//     {
//         int j = 0;
//         for (j = 0;j < c;j++)
//         {
//             //  printf("%d ", *(*(arr + i) + j));
//               printf("%d ",(*(arr+i))[j]);
//             // printf("%d ", arr[i][j]);

            
//         }
//         printf("\n");
//     }

// }
// int main()
// {
//     int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//     print2(arr,3,5);

//     return 0;
// }

