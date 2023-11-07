#include <iostream>
#include <cmath>
using namespace std;
int main() {
    for (int a = 1; a <= 15; a++) {
        for (int b = a; b <= 15; b++) {
            int c = sqrt(a * a + b * b);
            if (a * a + b * b == c * c && a + b > c) {
                cout << a << " - " << b << " - " << c<< endl;
            }
        }
    }
    return 0;
}
