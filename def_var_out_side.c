#include <stdio.h>

int x = 1;
int y = 2;
int add_two_num();

int main(int argc, char const *argv[])
{
    int result = add_two_num();
    printf("result = %d \n", result);
    return 0;
}
