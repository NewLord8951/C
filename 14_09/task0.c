#include <stdio.h>

int main() {
    int a[5][5][5];
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            for(int c = 0; c < 5; c++) {
                a[i][j][c] = 0;
            }
        }
    }
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            for(int c = 0; c < 5; c++) {
                printf("%d ", a[i][j][c]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}