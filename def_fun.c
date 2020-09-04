#include <stdio.h>

// 函数声明
int fun();

int main(int argc, char const *argv[])
{
    // 函数调用
    int result = fun();
    printf("result = %d \n", result);
    return 0;
}


// 函数定义
int fun()
{
    return 100 + 200;
}