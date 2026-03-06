
#include "contact.h"

enum Option
{
    EXIT,
    add,
    del,
    search,
    modify,
    show,
    sort
};
void menu()
{
    printf("***************************************************\n");
    printf("********  1. add            2. del    *************\n");
    printf("********  3. search         4. modify *************\n");
    printf("********  5. show           6. sort   *************\n");
    printf("********  0. exit                     *************\n");
    printf("***************************************************\n");

}

int main()
{
    int input = 0;
  

    Contact con;//通讯录
    //初始化通讯录
    InitContact(&con);

    do
    {
        menu();
        printf("请选择:>");
        scanf("%d",&input);
        switch (input)
        {
            case add:
                AddContact(&con);
                break;
            case del:
                DelContact(&con);
                break;
            case search:
                SearchContact(&con);
                break;
            case modify:
                ModifyContact(&con);
                break;
            case show:
                ShowContact(&con);
                break;
            case sort:
                 SortContact(&con);
                break;
            case EXIT:
                printf("退出通讯录");
                break;
            default:
                printf("选择错误");
                break;
        }

    } while(input != 0);

    return 0;
}