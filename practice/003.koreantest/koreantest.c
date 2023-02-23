#include <stdio.h>

int main()
{
    printf("문자열을 입력후 엔터를 누르세여\n");

    char a[256];
    scanf("%s", a);

    printf("\"%s\"를 입력하셨네여.\n", a);
    return 0;
}