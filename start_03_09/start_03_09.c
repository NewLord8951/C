#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char mas[5][5];
    srand((unsigned int)time(NULL));
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            int num = 1 + rand() % 5;
            if(num == 1) {
                mas[i][j] = 'a';
            }
            else if(num == 2) {
                mas[i][j] = 'b';
            }
            else if(num == 3) {
                mas[i][j] = 'c';
            }
            else if(num == 4) {
                mas[i][j] = 'd';
            }
            else if(num == 5) {
                mas[i][j] = 'e';
            }
        }
    }
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%c ", mas[i][j]);
        }
        printf("\n");
    }
    printf("insert: \n");
    char h[10];
    scanf("%s", h);
    printf("%s press F \n", h);
    return 0;
}