
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

enum Day//星期
{
    //枚举常量
    Mon=1,
    Tues,
    Wed,
    Thur,
    Fri,
    Sat,
    Sun
};
int main()
{
    // enum Day d = Wed;
    printf("%d\n",Mon);
    printf("%d\n",Tues);
    printf("%d\n",Wed);

    return 0;
}