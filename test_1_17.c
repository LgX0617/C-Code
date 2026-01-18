#include<stdio.h>
// void test(int a[])
// {

// }

// int main()
// {
//     // int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//     // test(arr);
//     char arr[] = "abcdef";
//     return 0;
// }

// int main()
// {
//     int a= 10;
//     int b= 20;
//     int c = a + b;
//     printf("%d",c);
//     return 0;
    
// } 
//1! +2! +3! ....+ n!
// int main()
// {
//     int n = 0;
//     scanf("%d",&n);
//     int i = 0;
//     int ret = 1;
//     int j = 0;
//     int sum = 0;
//     for ( j = 1; j <= n; j++)
//     {
//         for(i = 1;i <= j;i++)
//         {
           
//             ret *=i;
//         }
//         sum += ret;
//          ret = 1;
//     }

//     printf("%d",sum);

//     return 0;
// }
#include<string.h>
#include <assert.h>
// void my_strcpy (char* dest, char* src)
// {
//     while(*src != '\0')
//     {
//         *dest = *src;
//         dest++;
//         src++;
//     }
//     *dest = *src;  //把\0也拷贝过去

// }
// void my_strcpy (char* dest, const char* src)
// {
//     //断言
//     assert(src != NULL);
//     assert(dest != NULL);
//     while(*dest++ = *src++)
//     {
//         ;
       
//     }
   

// }

//为什么返回char*呢？
//是为了实现链式访问
//strcpy函数的返回值是目标空间的起始地址
char* my_strcpy(char* dest, const char* src)
{
    char* ret = dest;
    //断言
    assert(src != NULL);
    assert(dest != NULL);
    while(*dest++ = *src++)
    {
        ;
       
    }
   return ret;

}
int main()
{
    char arr1[20] = "xxxxxxxxxxxxx";
    char arr2[] = "hello bit!";
    char *p = NULL;
    //strcpy在拷贝字符串的时候，会把\0也拷贝过去
    printf("%s\n",my_strcpy (arr1,arr2));
    printf("%s\n",arr2);
    return 0;
}

// int main()
// {
//     const int num = 10;
//     //num = 20;
//     const int* p = &num;
//     //int const* p = &num;
//     // *p = 20;
//     printf("%d\n",num);

//     return 0;
// }