#include <stdio.h>

// 变量声明
extern int a;
extern int b;
extern int c;
extern int f;

int main(int argc, char const *argv[])
{
    // 变量声明
    int a;
    int b;
    int c;
    float f;

    // 实际的变量初始化
    a = 10;
    b = 20;
    c = (a + b);
    printf("value of c is %d \n", c);
    f = 70.0 / 3.0;
    printf("value of f is %d \n", f);
    return 0;
}
