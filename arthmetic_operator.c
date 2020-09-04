#include <stdio.h>

// C语言中的算数运算符
// + - * / %

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;
    int c;
    c = a + b;
    // +
    printf("a + b = %d \n", c);

    // -
    c = a - b;
    printf("a - b = %d \n", c);

    // *
    c = a * b;
    printf("a * b = %d \n", c);
    return 0;
}
