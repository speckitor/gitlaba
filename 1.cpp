#include <iostream>
using std::cin, std::cout;
int main() {
    int a, b, c, d;
    int len = 0;
    int s1 = a, s2 = b, s3 = c, s4 = d, t;
    if (s1 > s2) {
        t = s1;
        s1 = s2;
        s2 = t;
    }
    if (s3 > s4) {
        t = s3;
        s3 = s4;
        s4 = t;
    }
    if (s1 > s3) {
        t = s1;
        s1 = s3;
        s3 = t;
    }
    if (s2 > s4) {
        t = s2;
        s2 = s4;
        s4 = t;
    }
    if (s2 > s3) {
        t = s2;
        s2 = s3;
        s3 = t;
    }
    if (s2 - s1 > 0 && s2 - s1 == s3 - s2 && s3 - s2 == s4 - s3) {
        len = 4;
    }
    if (len < 3) {
        if (s2 - s1 > 0 && s2 - s1 == s3 - s2)
            len = 3;
        else if (s2 - s1 > 0 && s2 - s1 == s4 - s2)
            len = 3;
        else if (s3 - s1 > 0 && s3 - s1 == s4 - s3)
            len = 3;
        else if (s3 - s2 > 0 && s3 - s2 == s4 - s3)
            len = 3;
    }
    if (len < 2 && s1 != s4) {
        len = 2;
    }
    cout << len << '\n';
    return 0;
}