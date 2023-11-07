#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    for (a = 1; a <= 20; a++) {
        for (b = a; b <= 20; b++) {
            for (c = b; c <= 20; c++) {
                if (a * a + b * b == c * c && (a * a + b * b <= 20 * 20) && (a + b + c <= 30)) {
                    if ((a == 3 && b == 4 && c == 5) ||
                        (a == 6 && b == 8 && c == 10) ||
                        (a == 5 && b == 12 && c == 13) ||
                        (a == 8 && b == 15 && c == 17)) {
                        cout << "- " << a << " - " << b << " - " << c << endl;
                    }
                }
            }
        }
    }
    return 0;
}

