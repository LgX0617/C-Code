

//动态内存管理

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <stdint.h>

// int main()
// {
//     int arr[10] = { 0 };
//     //动态内存开辟
//     int* p = (int*)malloc(40);
//     if(p == NULL)
//     {
//         printf("%s",strerror(errno));
//         return 1;
//     }

//     int i;
//     for(i = 0;i<10;i++)
//     {
//         *(p + i) = i;
//     }
//     for(i = 0;i<10;i++)
//     {
//         printf("%d\n",*(p+i));
//     }

//     free(p);
//     p = NULL;

 
//     return 0;
// }

// int main()
// {
//     while (1)
//     {
//         malloc(1);
//     }
//     return 0;
// }

// int main()
// {
//     int* p = (int*)calloc(10, sizeof(int ));
//     if(p == NULL)
//     {
//         printf("%s",strerror(errno));
//         return 1;
//     }
//     int i = 0;
//     for(i=0;i<10;i++)
//     {
//         printf("%d",*(p+i));

//     }

//     free(p);
//     p=NULL;
//     return 0;
// }

// int main()
// {
//     int* p = (int*)malloc(40);
//     if(p == NULL)
//     {
//         printf("%s",strerror(errno));
//         return 1;
//     }
//     int i;
//     for(i = 0;i<10;i++)
//     {
//         *(p + i) = i + 1;
//     }
//     //扩容
//     int*  ptr = (int* )realloc(p,80);
//     if(ptr!= NULL)
//     {
//         p = ptr;
//     }

//     for(i = 0; i< 20; i++)
//     {
//         printf("%d\n",*(p + i));
//     }
//     free(p);
//     p=NULL;
//     return 0;  

// }


// int main()
// {
//     realloc(NULL,40);//malloc(40);
//     return 0;

// }