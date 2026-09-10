#include <stdio.h>
#include <stdlib.h>

int main() {
    int q = 0;
    scanf("%d", &q);
    int w = 0;
    scanf("%d", &w);
    int e = 1;
    int** a = (int**)malloc(q * sizeof(int));
    for(int i = 0; i < q; i++) {
        int* b = (int*)malloc(w * sizeof(int));
        for(int j = 0; j < w; j++) {
            b[j] = e;
            e++;
        }
        a[i] = b;
    }
    printf("\n");
    for(int i = 0; i < q; i++) {
        for(int j = 0; j < w; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i = 0; i < q; i++) {
        for(int j = 0; j < w; j++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    for(int i = 0; i < (q + w); i++) {
        free(a[i]);
    }
    free(a);
    
    return 0;
}