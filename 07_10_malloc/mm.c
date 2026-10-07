#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {
    srand((unsigned int)time(NULL));
    int n;
    bool t = true;
    printf(": ");
    scanf("%d", &n);
    int m;
    printf(": ");
    scanf("%d", &m);
    int **arr = (int**)malloc(n* sizeof(int*));
    if(n < 10 && m < 10) {
        for(int i = 0; i < n; i++) {
            int *arr0 = (int*)malloc(m* sizeof(int));
            for(int j = 0; j < m; j++) {
                arr0[j] = rand() % 10;
            }
            arr[i] = arr0;
        }  
    }
    else {
        t = false;
        printf("idi nahui\n");
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    free(arr);
    return 0;
}