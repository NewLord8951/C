#include <stdio.h>
#include <stdlib.h>

int sum_array(int *arr, int n) {
    int *a = arr;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += *(a + i);
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    printf("aaaaa\n");
    for(int i = 0; i < n; i++) {
        int q;
        scanf("%d", &q);
        *(arr + i) = q;
    }
    int a = sum_array(arr, n);
    printf("%d", a);
    return 0;
}