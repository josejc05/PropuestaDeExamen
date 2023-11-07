#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;

    for (a = 1; a <= 100; a++) {
        for (b = a; b <= 100; b++) {
            c = sqrt(a * a + b * b);
            if (a * a + b * b == c * c && a + b > c) {
                printf("%d - %d - %d\n", a, b, c);
            }
        }
    }

    return 0;
}
