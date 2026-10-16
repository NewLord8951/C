#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int arr[10][10];
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            arr[i][j] = rand() % 10;
        }
    }
    int min_str[10];
    for(int i = 0; i < 10; i++) {
        int q = arr[i][0]; 
        for(int j = 1; j < 10; j++) {
            if(arr[i][j] < q) {
                q = arr[i][j];
            }
        }
        min_str[i] = q;
    }
    int min_sto[10];
    for(int i = 0; i < 10; i++) {
        int q = arr[0][i]; 
        for(int j = 1; j < 10; j++) {
            if(arr[i][j] < q) {
                q = arr[i][j];
            }
        }
        min_sto[i] = q;
    } 
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i = 0; i < 10; i++) {
        printf("%d\n", min_str[i]);
    }
    printf("\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", min_sto[i]);
    }
    return 0;
}