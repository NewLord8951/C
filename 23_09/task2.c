#include <stdio.h>

typedef struct student {
    char *name;
    int age;
    float gpa;
} student;

int main() {
    student a[5];
    a[0].name = "abcdefgh0";
    a[1].name = "abcdefgh1";
    a[2].name = "abcdefgh2";
    a[3].name = "abcdefgh3";
    a[4].name = "abcdefgh4";

    a[0].age = 0;
    a[1].age = 1;
    a[2].age = 2;
    a[3].age = 3;
    a[4].age = 4;

    a[0].gpa = 1.0;
    a[1].gpa = 1.4;
    a[2].gpa = 1.2;
    a[3].gpa = 1.3;
    a[4].gpa = 1.2;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (a[j].gpa > a[j + 1].gpa) {
                float q = a[j].gpa;
                a[j].gpa = a[j + 1].gpa;
                a[j + 1].gpa = q;
            }
        }
    }
    printf("%.1f\n", a[4].gpa);
    return 0;
}