//求字符串长度
#include<stdio.h>
#include<assert.h>

// int my_strlen(const char* str)
// {
//    int count = 0;
//    assert(str);
//    while(*str != '\0')
//    {
//       count++;
//       str++;
//    }
//    return count;

// }

//  int main()
//  {
//     char arr[] = "hello bit";
//     int len = my_strlen(arr);
//     printf("%d\n",len);

//     return 0;
//  }

// int main()
// {
//    int i = 0;
//    int arr[10]={ 1,2,3,4,5,6,7,8,9,10};
//    printf("%p\n",arr);
//    printf("%p\n",&i);
//    // for (i=0; i<=12; i++)
//    // {
//    //    arr[i] = 0;
//    //    printf("hehe\n");
//    // }
//    return 0;
// }
// // 第一个void 表示函数没有返回值
// // 第二个void 表示函数没有参数
// void test(void)
// {
//    printf("hehe\n");
// }

// int main()
// {
//    test();
//    return 0;
// }

//大小端存储判断

int check_sys(int* a)
{
   return *(char*)a;
}

int main()
{
   int a = 1;

   int ret = check_sys(&a);
   if(ret == 1)  
   {
      printf("小端存储\n");
   }
   else
   {
      printf("大端存储\n");
   }
   // char* p = (char*)&a;
   // if(*p == 1)
   // {
   //    printf("小端存储\n");
   // }
   // else
   // {
   //    printf("大端存储\n");
   // }
   return 0;

}