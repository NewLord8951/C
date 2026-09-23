#include <stdio.h>

typedef struct w{
    char a[2];
    char b[2];
    char c[2];
}  w;

void b() {
    printf("\n aaaaa");
}

int main() {
    w aa = { "a", "b", "c" }; 
    b();
    printf("\n");
    printf(" %s, %s, %s\n", aa.a, aa.b, aa.c); 
    return 0;
}