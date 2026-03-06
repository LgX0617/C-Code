#include<stdio.h>
#include<string.h>
#include<assert.h>

// void* my_memcpy(void* dest, const void* src, size_t num)
// {
//     assert(dest && src);
//     void* ret = dest;
//     while(num--)
//     {
//         *(char*)dest = *(char*)src;
//         dest = (char*)dest + 1;
//         src = (char*)src + 1;
//     }

//     return ret;

// }
// //memcpy函数是不用来处理重叠的内存直接的数据拷贝

// void* my_memmove(void* dest , const void* src , size_t num)
// {
//     assert(dest && src);
//     void* ret = dest;
//     if(dest<src)
//     {
//          while(num--)
//         {
//         *(char*)dest = *(char*)src;
//         dest = (char*)dest + 1;
//         src = (char*)src + 1;
//         }   
//     }
//     else
//     {
//         while(num--)
//         {
//             *((char*)dest+num) = *((char*)src+num);
            
//         }
//         return ret;

//     }
// }

// int main()
// {
//     int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int arr2[20] = { 0 };
//     // my_memcpy(arr2,arr1,20);
//     // my_memmove(arr1, arr1 + 2, 20);
//     memcpy(arr1, arr1 + 2, 20);
//     int i = 0;
//     for(i = 0;i<10;i++)
//     {
//         printf("%d ",arr1[i]);
//     }
    
//     return 0;
// }

// int main()
// {
//     int arr1[] ={1, 2, 3, 4,};
//     int arr2[] = {1, 3, 2, };
//     int ret = memcmp(arr1,arr2,12);
//     printf("%d\n",ret);
//     return 0;
// }

// int main()
// {
//     char arr[] = "hello world";
//     memset(arr,'x',5);
//     printf("%s\n",arr);
//     return 0;
// }