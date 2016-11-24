#include <iostream>
#include <math.h>

using namespace std;

long long triangle(int n) {
    return ((long long)n * ((long long)n + 1)) / 2;
}

void test() {
    cout << triangle(285);
}

int main() {
    test();
    return 0;
}
