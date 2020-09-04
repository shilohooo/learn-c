#include <stdio.h>

// 函数声明
void fun();

// 全局变量定义
static int count = 5;

int main(int argc, char const *argv[])
{
    while (count--)
    {
        fun();
    }
    return 0;
}

// 函数定义
void fun()
{
    // 局部变量定义
    static int i = 5;
    i++;
    printf("i is %d and count is %d \n", i, count);
}
