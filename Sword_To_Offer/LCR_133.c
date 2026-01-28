/**
 * 编写一个函数，输入是一个无符号整数（以二进制串的形式），
 * 返回其二进制表达式中数字位数为 '1' 的个数（也被称为 汉明重量).）。
 */
#include <stdio.h>
#include <stdint.h>

int hammingWeight(uint32_t n) {
    int count = 0;
    while(n)
    {
        // if(n & 1== 1)
        // {
        //     count++;
        // }
        // n>>=1;
        // count += n & 1;
        // n >>= 1;
        n =  n & (n-1);
        count++;
        

    }

    return count;
}

int main()
{
    unsigned int n;
    scanf("%u", &n); 
    printf("%d", hammingWeight(n));
    

    return 0;
}