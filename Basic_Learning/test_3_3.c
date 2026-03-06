#include<stdio.h>

// struct S 
// {
//     int data[1000];
//     int num;
// };
// void print1(struct S ss)
// {
//     int i= 0;
//     for(i=0; i<3 ;i++)
//     {
//         printf("%d\n",ss.data[i]);
//     }
//     printf("%d\n",ss.num);

// }

// void print2(const struct S* sp)
// {
//      int i= 0;
//     for(i=0; i<3 ;i++)
//     {
//         printf("%d\n",sp->data[i]);
//     }
//     printf("%d\n",sp->num);
// }
// int main()
// {
//     struct S s = { {1,2,3}, 100};
//     print1(s);//传值调用
//     print2(&s);//传址调用
// }

// struct S
// {
//     int _a : 3;
//     int _b : 4;
//     int _c : 5;
//     int _d : 4;
   
// };
// int main()
// {
//     struct S s = { 0};
//     printf("%d\n",sizeof(struct S));
//     s._a = 10;
//     s._b = 12;
//     s._c = 3;
//     s._d = 4;

//     return 0;
// }