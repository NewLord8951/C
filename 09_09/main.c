#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand((unsigned int)time(NULL));
    int** a = (int**)malloc(221 * sizeof(int*));
    for(int i = 0; i < 221; i++) {
        int* b = (int*)malloc(221 * sizeof(int));
        for(int j = 0; j < 221; j++) {
            b[j] = rand() % 9;
        }
        a[i] = b;
    }

    for(int i = 0; i < 221; i++) {
        for(int j = 0; j < 221; j++) {
            printf("\033[32;40m %d ", a[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < 221; i++) {
        free(a[i]);
    }
    free(a);

    return 0;
}