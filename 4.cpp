#include <iostream>
#include <cmath>
#include <iomanip>

using std::cin, std::cout, std::fixed, std::setprecision;

int main() {
    double x;
    cin >> x;

    double sum = M_PI_2;
    double t = 0;
    int n = 1;
    int k;

    for (;;) {
        k = 2 * n - 1;
        t = 1.0 / (k * pow(x, k));

        if (fabs(t) < 1e-7)
            break;

        if (n % 2 == 1)
            t = -t;

        sum += t;
        ++n;
    }

    double exact = atan(x);
    double diff = fabs(sum - exact);

    cout << fixed << setprecision(8);
    cout << sum << " " << diff << '\n';

    return 0;
}
