#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp; 
}

int main() {
    int c = 1;
    int d = 2;
    swap(&c, &d);
    printf("c: %d, d: %d\n", c, d);
    return 0;
}