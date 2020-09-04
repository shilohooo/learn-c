#include <stdio.h>

int main(int argc, char const *argv[])
{
    // 使用const关键字定义常量
    const int LENGTH = 10;
    const int WIDTH = 20;
    const char NEW_LINE = '\n';

    int area = (LENGTH + WIDTH);
    printf("value of area = %d", area);
    printf("%c", NEW_LINE);
    return 0;
}
