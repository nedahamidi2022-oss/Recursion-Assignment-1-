#include <iostream>
using namespace std;

bool powerOfTwo(int n) {
    if (n == 1)
        return true;
    if (n == 0 || n % 2 != 0)
        return false;
    return powerOfTwo(n / 2);
}

int main() {
    int n;
    cin >> n;

    if (powerOfTwo(n))
        cout << "true";
    else
        cout << "false";
}
