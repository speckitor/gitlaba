#include <iostream>
#include <cmath>
#include <iomanip>

using std::cin, std::cout, std::fixed, std::setprecision;

int main() {
    double x, y;
    cin >> x >> y;

    double f;

    if (x > 0 && x - y > 0) {
        f = (1.0 - log(x - y)) / log(1.0 + fabs(x - 2.0 * y));
    } else if (x <= 0) {
        f = exp(-y) + (2.0 - sin(x)) / (2.0 + sin(x));
    } else {
        f = 1.0 / exp(x + y);
    }

    cout << fixed << setprecision(6);
    cout << f << '\n';

    return 0;
}
