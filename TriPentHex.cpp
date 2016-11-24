#include <iostream>
#include <math.h>

using namespace std;

long long triangle(int n) {
    return ((long long)n * ((long long)n + 1)) / 2;
}

long long hexagon(int n) {
    return (long long)n * ((long long)n*2 - 1);
}

bool isPent(long long num) {
    double n_est = (1 + sqrt(1+24*num)) / 6;
    return fmod(n_est, 1) == 0;
}

bool isHex(long long num) {
    double n_est = (1 + sqrt(1+8*num)) / 4;
    return fmod(n_est, 1) == 0;
}

void solveHex() {
    int n = 144;
    while (!isPent(hexagon(n))) n++;
    cout << "Hexagonal number_" << n << ": " << hexagon(n) << endl;
}

void solveTri() {
    int n = 286;
    while (!isPent(triangle(n)) || !isHex(triangle(n))) n++;
    cout << "Triangular number_" << n << ": " << triangle(n) << endl;
}

int main() {
    solveHex();
    return 0;
}
