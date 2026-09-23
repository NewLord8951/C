#include <stdio.h>

long long factorial(int n){
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int fib(int n){
    if (n <= 1) return 1; 
    return fib(n - 1) + fib(n - 2);
}

int stepn(int a, int b){
    if (b == 0) return 1;
    return a * stepn(a, b - 1);
}

int digit_sum(int n){
    if (n < 10) return n;
    return (n % 10) + digit_sum(n / 10);
}

int max_count(int arr[], int n){
    if (n == 1) return arr[0];
    int m = max_count(arr, n - 1);
    return arr[n - 1] > m ? arr[n - 1] : m;
}

int main(void) {
    int a = 2, b = 2;
    int c = 234, summ = 0;
    int arr[5] = {1, 2, 3, 4, 5};
    
    printf("%d", max_count(arr, 5));
    
    while (b != 0){
        a *= b;
        b--;
    }
    
    while (c > 0){
        summ += c % 10;
        c /= 10;
    }
    
}
