#include <iostream>
using namespace std;

int power(int b, int n) {
    if (n == 0)
        return 1;
    return b * power(b, n-1);
}

int sumPowers(int b, int n) {
    if (n == 0)
        return 1;
    return power(b, n) + sumPowers(b, n-1);
}

int main() {
    int b, n;
    cin >> b >> n;
    cout << sumPowers(b, n);
}