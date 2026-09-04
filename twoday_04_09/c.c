#include <stdio.h>

int main() {
    char a[10];
    int i = 0;
    while(i != 10) {
        i++;
        a[i] = getchar();
    }
    for(int i = 0; i < 10; i++) {
        putchar(a[i]);
    }
    printf("GO HOME!!!\n");
    return 0;
}