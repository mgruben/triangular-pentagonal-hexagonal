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

bool isHex(long long num) {
    double n_est = (1 + sqrt(1+8*num)) / 4;
    return fmod(n_est, 1) == 0;
}

void test() {
    long long x = triangle(285);
    cout << x << endl;
    cout << isPent(x) << endl;
    cout << isHex(x) << endl;
    cout << isPent(x-1) << endl;
    cout << isHex(x-1) << endl;
}

int main() {
    int n = 286;
    while (!isPent(triangle(n)) || !isHex(triangle(n))) n++;
    cout << n << ": " << triangle(n) << endl;
}
