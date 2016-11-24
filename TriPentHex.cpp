#include <iostream>
#include <math.h>

using namespace std;

long long triangle(int n) {
    return ((long long)n * ((long long)n + 1)) / 2;
}

bool isPent(long long num) {
    double n_est = (1 + sqrt(1+24*num)) / 6;
    return fmod(n_est, 1) == 0;
}

void test() {
    cout << triangle(285);
}

int main() {
    test();
    return 0;
}
