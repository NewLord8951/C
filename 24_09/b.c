#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct dimensios {
    double lenth;
    double width;
    double height;
};

struct book {
    char title[100];
    char author[50];
    int year;
    struct dimensios sizee;
};

double volume(struct dimensios a) {
    return a.height * a.lenth * a.width;
}

int issameauthor(struct book a, struct book b) {
    if(strcmp(a.author, b.author)) {
        return 1;
    }
    else {
        return 0;
    }
}

void printbook(struct book b) {
    printf("%c, %c, %d, %f\n", b.title, b.author, b.year, b.sizee);
}

struct book biggerbook(struct book a, struct book b) { 
    if(volume(a.sizee) > volume(b.sizee)) { 
        return a; 
    }
    else if(volume(a.sizee) < volume(b.sizee)) { 
        return b; 
    } 
    else { 
        printf("mimimimimimi\n");
    } 
}

void makeolder(struct book *b) {
    b->year -= 1;
}

int main(void) {
    struct book arr[] = {
        {"title0", "author000", 2022, {1, 1, 1}}, {"title1", "author11", 2021, {2, 2, 2}}, {"title2", "author2", 2020, {3, 3, 3}}};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int a;

    while(true) {
        printf("1(), 2(), 3(), 0() \n");
        scanf("%d", &a);
        if (a == 0) {
            break;
        }
        else if (a == 1) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    issameauthor(arr[i], arr[j]);
                }
            }
        }
        else if (a == 2) {
            for (int i = 0; i < n; i++) {
                printbook(arr[i]);
            }
        }
        else if (a == 3) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    biggerbook(arr[i], arr[j]);
                }
            }
        }
    }
    return 0;
}