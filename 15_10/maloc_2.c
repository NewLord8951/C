#include <stdio.h>

int main() {
    char a[5][5];
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(i >= j) {
                a[i][j] = '*';
            }
            else {
                a[i][j] = ' ';
            }
        }
    }
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%c", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    char b[5][5];
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(i + j <= 5 - 1) {
                b[i][j] = '*';
            }
            else {
                b[i][j] = ' ';
            }
        }
    }
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%c", b[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    char c[5][5];
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(i <= j) {
                c[i][j] = '*';
            }
            else {
                c[i][j] = ' ';
            }
        }
    }
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%c", c[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    char d[5][5];
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(i + j >= 5 - 1) {
                d[i][j] = '*';
            }
            else {
                d[i][j] = ' ';
            }
        }
    }
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%c", d[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}