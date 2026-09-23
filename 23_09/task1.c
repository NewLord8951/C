#include <stdio.h>

typedef struct point {
    double x;
    double y;
} point;

point printpoint(void) {
    point p;
    scanf("%lf %lf", &p.x, &p.y);
    return p;
}

double distance(point p) {
    return p.x * p.x + p.y * p.y;
}

int main() {
    point p = printpoint();
    double q = distance(p);
    printf("%.1f %.1f\n", p.x, p.y);
    printf("%.2f\n", q);
    return 0;
}