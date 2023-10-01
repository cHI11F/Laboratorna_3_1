#include <iostream>
#include <cmath>
using namespace std;
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x; 
    double y; 
    double A; 
    double B; 

    cout << "x = ";
    cin >> x;

    A = pow(x, 3) + 2;

    // спосіб 1: розгалуження в скороченій формі
    if (x < 4)
        B = 5 * pow(x, 8) + pow(x, 6) + 3;
    if (4 <= x && x < 7)
        B = atan(1.0 / (abs(x + 3) / 2)) + 7 * x;
    if (x >= 7)
        B = log(2 * x + exp(5 * x + 5));

    cout << endl;
    cout << "1) y = " << A + B << endl;

    // спосіб 2: розгалуження в повній формі
    if (x < 4)
        B = 5 * pow(x, 8) + pow(x, 6) + 3;
    else if (x >= 7)
        B = log(2 * x + exp(5 * x + 5));
    else
        B = atan(1.0 / (abs(x + 3) / 2)) + 7 * x;

    y = A + B;
    cout << "2) y = " << y << endl;

    cin.get();
    return 0;
}

