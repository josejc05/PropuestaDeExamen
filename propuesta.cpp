#include <iostream>
#include <cmath>
using namespace std;
int main() {
    for (int a = 1; a <= 20; a++) {
        for (int b = a; b <= 20; b++) {
            int c = sqrt(a * a + b * b);
            if (a * a + b * b == c * c && a + b > c) {
                cout << a << " - " << b << " - " << c;
            }
        }
    }
    return 0;
}
