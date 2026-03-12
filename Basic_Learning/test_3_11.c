#include <stdio.h>
#include <string.h>
#include <errno.h>

// int main()
// {
//     FILE *pf = fopen("C:\\Users\\骆兴\\Desktop\\课表.txt", "r");
//     if (pf == NULL)
//     {
//         printf("%s\n", strerror(errno));
//         return 1;
//     }

//     fclose(pf);
//     pf = NULL;

//     return 0;
// }

// int main()
// {
//     FILE *pf = fopen("test.txt", "r");
//     if (pf == NULL)
//     {
//         printf("%s\n", strerror(errno));
//         return 1;
//     }
//     // // 写文件
//     // char i;
//     // for (i = 'a'; i <= 'z'; i++)
//     // {
//     //     fputc(i, pf);
//     // }

//     // 读文件
//     // int ch = fgetc(pf);
//     // printf("%c\n", ch);
//     int ch = 0;
//     while ((ch = fgetc(pf)) != EOF)
//     {
//         printf("%c", ch);
//     }

//     // 关闭文件

//     fclose(pf);
//     pf = NULL;

//     return 0;
// }

// int main()
// {
//     FILE *pf = fopen("test.txt", "r");
//     if (pf == NULL)
//     {
//         // printf("%s\n", strerror(errno));
//         perror("fopen");
//         return 1;
//     }

//     // 读一行数据
//     char arr[20];
//     fgets(arr, 20, pf);
//     printf("%s\n", arr);

//     // 写一行数据
//     //  char *p = "abcdef";
//     // fgets("hello bit", pf);

//     // 关闭文件

//     fclose(pf);
//     pf = NULL;

//     return 0;
// }

// struct S
// {
//     char name[20];
//     int age;
//     float score;
// };
// int main()
// {
//     struct S s = {0};
//     FILE *pf = fopen("test.txt", "r");
//     if (pf == NULL)
//     {
//         perror("fopen");
//         return 1;
//     }
//     //
//     // fprintf(pf, "%s %d %f", s.name, s.age, s.score);

//     char arr[20];
//     fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
//     printf("%s %d %f\n", s.name,s.age,s.score);

//     fclose(pf);
//     pf = NULL;

//     return 0;
// }

// 二进制读写文件
// struct S
// {
//     char name[20];
//     int age;
//     float score;
// };

// int main()
// {
//     struct S s = {0};
//     FILE *pf = fopen("text.txt", "rb");

//     if (pf == NULL)
//     {
//         perror("fopen");
//         return 1;
//     }

//     // 二进制的方式读
//     fread(&s, sizeof(struct S), 1, pf);
//     printf("%s %d %f", s.name, s.age, s.score);

//     fclose(pf);
//     pf = NULL;

//     return 0;
// }
// int main()
// {
//     struct S s = {"zhangsan", 25, 50.5f};
//     FILE *pf = fopen("text.txt", "wb");

//     if (pf == NULL)
//     {
//         perror("fopen");
//         return 1;
//     }

//     // 二进制的方式写
//     fwrite(&s, sizeof(struct S), 1, pf);

//     fclose(pf);
//     pf = NULL;

//     return 0;
// }

int main()
{

    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8};
    printf("%d", sizeof(arr));

    return 0;
}