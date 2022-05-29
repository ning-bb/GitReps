#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    printf("hello wrold\r\n");

    int a,b;

    a = 10;
    b = 11;

    printf("a + b = %d\r\n",a+b);

    printf("a + b = %d\r\n",a);

    //这是在主分支中添加的代码
    return 0;
}