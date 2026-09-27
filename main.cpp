#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;

    cin >> n;

    int n1 = n / 1000;
    int n2 = (n / 100) % 10;
    int n3 = (n / 10) % 10;
    int n4 = n % 10;

    int m1 = n1 - n4;
    int m2 = n2 - n3;

    cout << pow(m1, 2) + 1 + pow(m2, 2);

    return 0;
}