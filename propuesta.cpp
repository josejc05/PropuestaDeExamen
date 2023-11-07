#include <iostream>
#include <cmath>
using namespace std;

int main() {
    for (int a = 1; a <= 100; a++) {
        for (int b = a; b <= 100; b++) {
            int c2 = a * a + b * b;
            int c = static_cast<int>(sqrt(c2));
            if (c * c == c2 && (a + b + c <= 30)) {
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
