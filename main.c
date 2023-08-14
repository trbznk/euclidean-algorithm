#include <stdio.h>

#define N 2

int gcd(int a, int b) {
    while (a % b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return b;
}

int main() {    
    for (int a = 1; a < N; a++) {
        for (int b = 1; b < N; b++) {
            printf("a=%d b=%d gcd=%d\n", a, b, gcd(a, b));
        }
    }
    return 0;
}
