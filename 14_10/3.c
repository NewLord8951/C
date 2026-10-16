#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void min_max(int *arr, int n) {
    int *min = arr;
    int *max = arr;
    for(int i = 1; i < n; i++) {
        if(*(arr + i) > *max) {
            max = arr + i;
        }
        if(*(arr + i) < *min) {
            min = arr + i;
        }
    }
    printf("%d %d", *max, *min);
}

int main() {
    srand(time(NULL));
    int n;
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < 10; i++) {
        arr[i] = rand() % 10;
    }
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    min_max(arr, n);
    return 0;
}