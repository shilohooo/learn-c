#include <stdio.h>
// 定义变量
int x;
int y;
// 声明函数
int add_two_num()
{
    // 函数内声明变量x,y为外部变量
    extern int x;
    extern int y;
    // 给外部变量（全局变量）x和y赋值
    x = 1;
    y = 2;
    // 返回x+y的和
    return (x + y);
}

int main(int argc, char const *argv[])
{
    // 获取函数的返回结果
    int result = add_two_num();
    printf("result = %d \n", result);
    return 0;
}
