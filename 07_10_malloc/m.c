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
    int *arr = (int*)malloc(n * sizeof(int));
    if(n > 100) {
        t = false;
        printf("idi nahui\n");
    }
    else {
        for(int i = 0; i < n; i++) {
                arr[i] = rand() % 10;
            }
    }
    int nn;
    if(t == false) {
        printf("idi nahui\n");
    }
    else {
        printf(": ");
        scanf("%d", &nn);
        int a = arr[nn];
        printf("%d\n", a);
        for(int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }
    
    free(arr);
    return 0;
}