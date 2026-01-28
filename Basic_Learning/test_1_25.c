#include <stdio.h>
#include <string.h>
// int Add(int x, int y)
// {
//     return x + y;
// }

// void calc ( int (*pf)(int, int))
// {
//     int ret = pf(2, 3);
//     printf("ret = %d\n", ret);
// }   
// int main()
// {
//     // int arr[5] = {0};
//     // //&数组名 —— 取出数组的地址
//     // int (*p)[5] = &arr;//数组指针



//     // //&函数名 —— 函数的地址
//     // // printf("%p\n",&Add);
//     // // printf("%p\n",Add);//函数名表示函数的地址
//     // int (*pf)(int,int) = Add;//函数指针

//     // int ret = (*pf)(2,3);
//     // int ret2 = pf(2,3);
//     // printf("%d\n",ret);
//     // printf("%d\n",ret2);
//     calc(Add);
//     printf("sizeof(Add) = %d\n", sizeof(Add));
//     return 0;


// }

// typedef void(*pf_t)(int ); //把 void (*)(int) 类型重命名为 pf_t

// int main () 
// {
//     //( *( void (*)() ) 0 ) ( );

//     void (* signal( int, void (*)(int) ) )(int);

//     pf_t signal(int , pf_t);

//     return 0;
// }

// 函数指针用途
//计算器
//1.加法 2.减法 3.乘法 4.除法 0.退出
// void menu()
// {
//     printf("***********************\n");
//     printf("***** 1.加法 *********\n");
//     printf("***** 2.减法 *********\n");
//     printf("***** 3.乘法 *********\n");
//     printf("***** 4.除法 *********\n");
//     printf("***** 0.退出 *********\n");
//     printf("***********************\n");
// }

// int Add(int x, int y)
// {
//     return x + y;
// }
// int Sub(int x, int y)
// {
//     return x - y;
// }
// int Mul(int x, int y)
// {
//     return x * y;
// }
// int Div(int x, int y)
// {
//     return x / y;
// }

// //计算函数
// //回调函数

// void calc (int (*pf)(int ,int ))
// {
//     printf("请输入两个操作数:>");
//     int a = 0;
//     int b = 0;
//     scanf("%d%d", &a, &b);
//     int ret = pf(a,b);
//     printf("ret = %d\n", ret);
// }

// int main ()
// {
//     int input = 0;
//     do{
//         menu();
//         printf("请选择:>");
//         scanf("%d", &input);
//         switch (input)
//         {
//         case 1:
//             calc(Add);
//             break;
//         case 2:
//             calc(Sub);
//             break;
//         case 3:
//            calc(Mul);
//             break;
//         case 4:
//             calc(Div);
//             break;
//         case 0:
//             printf("退出计算器！\n");
//             break;
//         default:
//             printf("输入错误，请重新输入！\n");
//             break;
//         }
//     } while(input);

    
//     return 0;
// }

// int Add(int x, int y)
// {
//     return x + y;
// }
// int Sub(int x, int y)
// {
//     return x - y;
// }
// int Mul(int x, int y)
// {
//     return x * y;
// }
// int Div(int x, int y)
// {
//     return x / y;
// }

// int main ()
// {
//     int (*pf)(int,int ) = Add;
//     int (*arr[4])(int ,int ) = {Add, Sub, Mul, Div};//arr就是函数指针数组

//     int i = 0;
//     for(i = 0; i < 4; i++)
//     {
//         int ret = arr[i](20, 10);
//         printf("ret = %d\n", ret);
//     }
//     return 0;
// }

// void menu()
// {
//     printf("***********************\n");
//     printf("***** 1.加法 *********\n");
//     printf("***** 2.减法 *********\n");
//     printf("***** 3.乘法 *********\n");
//     printf("***** 4.除法 *********\n");
//     printf("***** 0.退出 *********\n");
//     printf("***********************\n");
// }

// int Add(int x, int y)
// {
//     return x + y;
// }
// int Sub(int x, int y)
// {
//     return x - y;
// }
// int Mul(int x, int y)
// {
//     return x * y;
// }
// int Div(int x, int y)
// {
//     return x / y;
// }

// int main ()
// {
//     int a = 0;
//     int b = 0;
//     int input = 0;

//     //转移表
//     int (*pfarr[]) (int ,int ) = {0, Add, Sub, Mul, Div};//函数指针数组
//     do{
//         menu();
//         printf("请选择:>");
//         scanf("%d", &input);
//         if(input == 0)
//         {
//             printf("退出计算器！\n");
//         }
//         else if(input > 0 && input < 5)
//         {
//             printf("请输入两个操作数:>");
//             scanf("%d%d", &a, &b);
//             int ret = pfarr[input](a,b);
//             printf("ret = %d\n", ret);
//         }
//         else 
//         {
//             printf("输入错误，请重新输入！\n");
//         }
//     } while(input);

    
//     return 0;
// }

// int main()
// {
//     //函数指针数组
//     int (*pfArr[])(int , int) = {0, Add, Sub, Mul, Div};

//     //数组指针，指向函数指针数组
//     int(*(*pfa)[4])(int, int) = &pfArr;
//     return 0;
// }
#include <stdlib.h>
// void bubble_sort(int arr[], int sz)
// {
//     int flag = 1;
//     int i = 0;
//     int j = 0;
//     //趟数
//     for(i = 0; i < sz - 1; i++)
//     {
//         //一趟冒泡排序的过程
//         for(j = 0; j < sz - 1 - i; j++)
//         {
//             if(arr[j] > arr[j + 1])
//             {
//                 int tmp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = tmp;
//                 flag = 0;
//             }
//         }
//         if(flag == 1)
//         {
//             break;
//     }
//  }
// }

// //qsort
// // void qsort(void *base,//你要排序的数据的起始位置
// //             size_t num,//待排序的数据个数
// //             size_t width,//每个数据的字节大小
// //             int (*compar)(const void *, const void *)//函数指针——比较函数
// //         );

int cmp_int(const void* e1, const void* e2)
{
    //升序
    return *(int*)e1 - *(int*)e2;

    //降序
    //return *(int*)e2 - *(int*)e1;
}
// int main()
// {

//     int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//     //把数组排成升序
//     int sz=sizeof(arr)/sizeof(arr[0]);
//     // bubble_sort(arr, sz);
//     qsort(arr,sz,sizeof(arr[0]),cmp_int);
//     int i = 0;
//     for(i = 0; i < sz; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// int main()
// {
//     int a=10;
//     void* p=&a;//void*可以指向任意类型的数据
//     //void*是无具体类型的指针，所以不能解引用操作，也不能+-整数
// }

void test1()
{
     int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
    //把数组排成升序
    int sz=sizeof(arr)/sizeof(arr[0]);
    // bubble_sort(arr, sz);
    qsort(arr,sz,sizeof(arr[0]),cmp_int);
    int i = 0;
    for(i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
}

struct Stu
{
    char name[20];
    int age;
};

void Swap(char*buf1,char*buf2,int width)
{
    int i = 0;
    for(i = 0; i < width; i++)
    {
        char tmp = *(buf1 + i);
        *(buf1 + i) = *(buf2 + i);
        *(buf2 + i) = tmp;
    }

}
void bubble_sort(void* base, int sz, int width,int (*cmp)(const void* e1, const void* e2))
{
    int flag = 1;
    int i = 0;
    int j = 0;
    //趟数
    for(i = 0; i < sz - 1; i++)
    {
        //一趟冒泡排序的过程
        for(j = 0; j < sz - 1 - i; j++)
        {
            if(cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
            {
                //交换
                Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
                flag = 0;

            }
        }
        if(flag == 1)
        {
            break;
    }
 }
}

int cmp_stu_by_name(const void* e1, const void* e2)
{
    //按名字升序
    return strcmp( ((struct Stu*)e1)->name , ((struct Stu*)e2)->name );
}

int cmp_stu_by_age(const void* e1, const void* e2)
{
    //按年龄升序
    return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;

}

void test2()
{
   //测试使用qsort来排序结构数据
   struct Stu s[] = {{"zhangsan",20},{"lisi",18},{"wangwu",22}};
   int sz = sizeof(s)/sizeof(s[0]);
//    qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
        qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);

}

void test3()
{
     int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
     
    //把数组排成升序
    int sz=sizeof(arr)/sizeof(arr[0]);
    // bubble_sort(arr, sz);
    bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
    int i = 0;
    for(i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
}

void test4()
{
   //测试使用qsort来排序结构数据
   struct Stu s[] = {{"zhangsan",20},{"lisi",18},{"wangwu",22}};
   int sz = sizeof(s)/sizeof(s[0]);
//    qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
        bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);

}

int main()
{
    test4();

    // test3();
    // test2();
    return 0;
}
 