#include <stdio.h>

int main() {
    int num1;
    scanf("%d", &num1);
    char a;
    scanf(" %c", &a);
    int num2;
    scanf("%d", &num2);
    if(a == '+') {
        int plus = num1 + num2;
        printf("%d\n", plus);
    }
    else if(a == '-') {
        int minus = num1 - num2;
        printf("%d\n", minus);
    }
    else if(a == '*') {
        int umno = num1 * num2;
        printf("%d\n", umno);
    }
    else if(a == '/') {
        if (num2 == 0) {
            printf("ЭТО НОЛЬ ГЕНИЙё\n");
        }
        int dele = num1 / num2;
        printf("%d\n", dele);
    }
    else {
        printf("ПОШЁЛ ТЫ \n");
    }
    return 0;
}