#include<stdio.h>

// int main()
// {
//     char arr[] = { 'a' , 'b' , 'c' ,'d' , 'e' ,'f'};
//     printf("%d\n",sizeof(arr));//6
//     //sizeof(数组名)
//     printf("%d\n",sizeof(arr + 0));//4/8
//     //数组首元素地址
//     printf("%d\n",sizeof(*arr));//1
//     //*arr是数组首元素
//     printf("%d\n",sizeof(arr[1]));//1
//     printf("%d\n",sizeof(&arr));//4/8
//     printf("%d\n",sizeof(&arr + 1));//4/8
//     printf("%d\n",sizeof(&arr[0] + 1));//4/8
  
//     return 0;
// }
#include<string.h>
// int main()
// {
//     char arr[] = { 'a' , 'b' , 'c' ,'d' , 'e' ,'f'};
//     printf("%d\n",strlen(arr));//随机值
//     printf("%d\n",strlen(arr +0));//随机值
//  //   printf("%d\n",strlen(*arr));//--->strlen('a');--->strlen(97);//野指针
//  //   printf("%d\n",strlen(arr[1]));//--->strlen('b');--->strlen(98);//野指针
//     printf("%d\n",strlen(&arr));//随机值
//     printf("%d\n",strlen(&arr +1));//随机值-6
//     printf("%d\n",strlen(&arr[0] + 1));//随机值-1


//     return 0;
// }

// int main()
// {
//    // char arr[] = { 'a' , 'b' , 'c' ,'d' , 'e' ,'f'};
//     char arr[] = {"abcdef"};
//     //strlen是字符串长度的，关注的是字符串中的\0;
//     //sizeof只关注占用内存空间大小
//     printf("%d\n",strlen(arr));//6
//     printf("%d\n",strlen(arr + 0));//6
//    // printf("%d\n",strlen(*arr));//err
//    // printf("%d\n",strlen(arr[1]));//err
//     printf("%d\n",strlen(&arr));//6
//     printf("%d\n",strlen(&arr + 1));//随机值
//     printf("%d\n",strlen(&arr[0] + 1));//5
    

//     //[a b c d e f \0]
//     // printf("%d\n",sizeof(arr));//7
//     // printf("%d\n",sizeof(arr+0));//8
//     // printf("%d\n",sizeof(*arr));//1
//     // printf("%d\n",sizeof(arr[1]));//1
//     // printf("%d\n",sizeof(&arr));//8
//     // printf("%d\n",sizeof(&arr + 1));//8
//     // printf("%d\n",sizeof(&arr[0] + 1));//8
//     return 0;
// }

// int main()
// {
//     char* p = "abcdef";
//     printf("%d\n",sizeof(p));//8
//     printf("%d\n",sizeof(p + 1));//8
//     printf("%d\n",sizeof(*p));//1
//     printf("%d\n",sizeof(p[0]));//--->*(p+0)
//     printf("%d\n",sizeof(&p));//8
//     printf("%d\n",sizeof(&p + 1));//8
//     printf("%d\n",sizeof(&p[0] + 1));//-->&*(p+0)+1;--->p+1

//     printf("%d\n",strlen(p));//6
//     printf("%d\n",strlen(p + 1));//5
//   //  printf("%d\n",strlen(*p));//err
//   //  printf("%d\n",strlen(p[0]));//err
//     printf("%d\n",strlen(&p));//随机值
//     printf("%d\n",strlen(&p + 1));//随机值
//     printf("%d\n",strlen(&p[0] + 1));//5
    


//     return 0;
// }

int main()
{
  int a[3][4]= { 0 };
  printf("%d\n",sizeof(a));//48
  printf("%d\n",sizeof(a[0][0]));//8
  printf("%d\n",sizeof(a[0]));//16
  //a[0]是第一行一维数组的数组名，单独放在sizeof内部，表示整个一维数组
  //sizeof(a[0])计算的是第一行大小
  printf("%d\n",sizeof(a[0] + 1));//8
  //第一行第二个元素地址
  printf("%d\n",sizeof(*(a[0] + 1)));//8
  printf("%d\n",sizeof(a + 1 ));//8
  //a表示首元素地址，二维数组的首元素是它的第一行
  printf("%d\n",sizeof(*(a + 1)));//16
  //*(a+1)是第二行的地址解引用，拿到的是第二行
  //*(a+1)-->a[1];
  printf("%d\n",sizeof(&a[0] + 1));//8
  printf("%d\n",sizeof(*(&a[0] + 1)));//16
  printf("%d\n",sizeof(*a));//16
  printf("%d\n",sizeof(a[3]));//16




  return 0;

}

