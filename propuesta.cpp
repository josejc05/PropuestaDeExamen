#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    vector<string> resultados;

    for (int a = 1; a <= 20; a++) {
        for (int b = a; b <= 20; b++) {
            int c = sqrt(a * a + b * b);
            if (a * a + b * b == c * c && a + b > c) {
                if ((a == 3 && b == 4 && c == 5) ||
                    (a == 6 && b == 8 && c == 10) ||
                    (a == 5 && b == 12 && c == 13) ||
                    (a == 8 && b == 15 && c == 17)) {
                    resultados.push_back("- " + to_string(a) + " - " + to_string(b) + " - " + to_string(c));
                }
            }
        }
    }
    for (const string& resultado : resultados) {
        cout << resultado << endl;
    }
    return 0;
}
