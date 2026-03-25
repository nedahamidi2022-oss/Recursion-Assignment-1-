#include <iostream>
using namespace std;

void reverseNumbers(int n) {
    if (n == 0)
        return;
    int x;
    cin >> x;
    reverseNumbers(n-1);
    cout << x << " ";
}

int main() {
    int n;
    cin >> n;
    reverseNumbers(n);
}