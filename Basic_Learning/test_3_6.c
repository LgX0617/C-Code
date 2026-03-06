
//枚举
//枚举类型的定义
#include<stdio.h>

// enum Day//星期
// {
//     //枚举常量
//     Mon,
//     Tues,
//     Wed,
//     Thur,
//     Fri,
//     Sat,
//     Sun
// };

// enum Day//星期
// {
//     //枚举常量
//     Mon=1,
//     Tues,
//     Wed,
//     Thur,
//     Fri,
//     Sat,
//     Sun
// };
// int main()
// {
//     // enum Day d = Wed;
//     printf("%d\n",Mon);
//     printf("%d\n",Tues);
//     printf("%d\n",Wed);

//     return 0;
// }


//联合(共用体)

union Un
{
    char c;
    int i;
};

struct St
{
    int a;
    char c;

};
int main()
{
    union Un u;
    struct St n;
    printf("%d\n",sizeof(u));
    printf("%d\n",sizeof(n));   

    printf("%p\n",&u);
    printf("%p\n",&(u.c));
    printf("%p\n",&(u.i));
    return 0;

}
