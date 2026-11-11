#include <iostream>

using std::cin, std::cout;

int main() {
    double x, y;
    cin >> x >> y;

    if (y <= 1.0 - x && y >= 0 && y >= x*x-5.0) {
        cout << 1 << '\n';
        return 0;
    }

    if (y <= 2.0 - 2.0 * x * x && y >= 1.0 - x) {
        cout << 1 << '\n';
        return 0;
    }

    if (y >= 2.0 - 2.0 * x * x && y <= 1.0 - x && y >= x*x-5.0) {
        cout << 1 << '\n';
        return 0;
    }

    cout << 0 << '\n';
    return 0;
}
