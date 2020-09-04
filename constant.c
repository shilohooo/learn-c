#include <stdio.h>

// 定义常量，变量名全大写，单词间用下划线"_"隔开
#define LENGTH 10
#define WIDTH 15
#define NEW_LINE '\n'

int main(int argc, char const *argv[])
{
    int area = LENGTH + WIDTH;
    printf("value or area = %d", area);
    printf("%c", NEW_LINE);
    return 0;
}
