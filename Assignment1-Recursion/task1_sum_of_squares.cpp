#include <iostream>
using namespace std;

int sumSquares(int n) {
    if (n == 1)
        return 1;
    return n*n + sumSquares(n-1);
}

int main() {
    int n;
    cin >> n;
    cout << sumSquares(n);
}