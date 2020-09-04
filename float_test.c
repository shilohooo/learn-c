#include <stdio.h>
#include <float.h>

int main(int argc, char const *argv[])
{
    printf("float数据类型存储字节大小为：%lu \n", sizeof(float));
    printf("float数据类型的最大值为：%E \n", FLT_MAX);
    printf("float数据类型的最小值为：%E \n", FLT_MIN);
    printf("float数据类型的精度值为：%d \n", FLT_DIG);
    return 0;
}