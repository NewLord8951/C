#include <stdio.h>

int main() {
    int a[5];
    int b = 0;
    printf("insert: \n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (a[j] > a[j + 1]) {
                b = a[j];
                a[j] = a[j + 1];
                a[j + 1] = b;
            }
        }
    }
    printf("\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}