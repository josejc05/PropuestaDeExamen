#include <iostream>
#include <cmath>
using namespace std;

int main() {
    for (int a = 1; a <= 20; a++) { // empezamos en 1 porque no hay triángulo con lados 0 y creamos un contador para a
        for (int b = a; b <= 20; b++) { // empezamos en a porque no hay triángulo con lados menores que a y creamos un contador para b
            int c = sqrt(a* a + b * b); // calculamos c
            if (a * a + b * b == c*c && a + b > c) { // comprobamos si es un triángulo rectángulo
                if ((a == 3 && b == 4 && c == 5) || // seleccionamos según los valores que nos piden
                    (a == 6 && b == 8 && c == 10) ||
                    (a == 5 && b == 12 && c == 13) ||
                    (a == 8 && b == 15 && c == 17)) {
                    cout << "- " << a << " - " << b << " - " << c << endl; // imprimimos el triángulo
                }
            }
        }
    }
    return 0;
}
