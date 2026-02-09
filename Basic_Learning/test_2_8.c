#include<stdio.h>
#include<string.h>

// int main()
// {
//     //if((int)(strlen("abc") - strlen("abcdef")) > 0)
//       if(strlen("abc") > strlen("abcdef"))
//     {
//         printf(">\n");
//     }
//     else 
//     {
//         printf("<=\n");
//     }
//     return 0;
// }

    //模拟实现
#include<assert.h>
//计数器实现

// int my_strlen(const char* arr)
// {
//     assert(arr);
//     int i =0;
//     int count = 0;
//     while(*arr != '\0'){
//         count++;
//         arr++;
//     }

//     return count;

// }


// //指针-指针
// int my_strlen( char* str)
// {
//     assert(str);
//     char* p = str;
//     while(*p!='\0')
//     {
//         p++;
//     }
//     return p-str;

// }

// //递归
// int my_strlen(char* str)
// {
//     if(*str == '\0')
//     {
//         return 0;
//     }
//     else 
//     {
//         return 1+my_strlen(str + 1);

//     }
// }
// int main()
// {
//     char arr[] = "abcdef";
//     int len = my_strlen(arr);
//     printf("%d",len);
//     return 0;

// }

// int main()
// {
//     char name[20];
//     char* p = "zhangsan";
//     strcpy(name,p);
//     printf("%s",name);
//     return 0;

// }
char* my_strcpy(char* p2, const char* p1)
{
    assert(p2 && p1);
    char* ret = p2;
    while(*p2++=*p1++){

    }

    return ret;
}

    //字符串追加
char* my_strcat(char* dest ,const char* str)
{
    assert(dest && str);
    char* ret = dest;
    while(*dest !='\0'){
        dest++;
    }
    while(*dest++ = *str++){
        ;
    }
    return ret;

}
int main()
{
    char arr1[20] = {"hello "};
    my_strcat(arr1,"world");
    printf("%s",arr1);

    // char arr1[] = "abcdef";
    // char arr2[20] = { 0 };
    // my_strcpy(arr2,arr1);
    // printf("%s",arr2);


    return 0;
}