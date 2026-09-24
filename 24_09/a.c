#include <stdio.h>

struct a {
    int d, m, y;
};

struct b {
    char *n;
    struct a aa;
    int s;
};

int sta(struct a aa) {
    return 2025 - aa.y;
}

void p(struct b bb) {
    printf("%s, %d.%d.%d, %d, %d\n", bb.n, bb.aa.d, bb.aa.m, bb.aa.y, bb.s, sta(bb.aa));
}

void au(struct b arr[], int nn, int y) {
    printf("%d \n", y);
    for(int i = 0; i < nn; i++) {
        if(arr[i].aa.y > y) {
            p(arr[i]);
        }
    }
}

int aas(struct b arr[], int nn) {
    int sum = 0;
    for(int i = 0; i < nn; i++) {
        sum += arr[i].s;
    }
    return nn ? sum / nn : 0;
}

int me(struct b arr[], int nn) {
    int bbb = 0;
    for(int i = 0; i < nn; i++) {
        if(sta(arr[i].aa) > sta(arr[bbb].aa)) {
            bbb = i;
        }
    }
    return bbb;
}

int main() {
    struct b arr[] = {{"S", {1, 1, 2020}, 55555}, {"A", {2, 2, 2022}, 5552}};
    int nn = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < nn; i++) {
        p(arr[i]);
    }
    printf("\n");
    int yy = 2026;
    au(arr, nn, yy);
    printf("\n%d", aas(arr, nn));
    int id = me(arr, nn);
    printf("\n%s %d", arr[id].n, sta(arr[id].aa));
    return 0;
}