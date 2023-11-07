#include <iostream>
#include <cmath>
using namespace std;

int main() {
    for (int a = 1; a <= 20; a++) {
        for (int b = a; b <= 20; b++) {
            int c = sqrt(a* a + b * b);
            if (a * a + b * b == c*c && a + b > c) {
                if ((a == 3 && b == 4 && c == 5) ||
                    (a == 6 && b == 8 && c == 10) ||
                    (a == 5 && b == 12 && c == 13) ||
                    (a == 8 && b == 15 && c == 17)) {
                    cout << "- " << a << " - " << b << " - " << c << endl;
                }
            }
        }
    }
    return 0;
}
