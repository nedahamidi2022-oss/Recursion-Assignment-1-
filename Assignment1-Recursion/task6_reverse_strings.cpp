#include <iostream>
using namespace std;

void reverseStrings(int n) {
    if (n == 0)
        return;
    char str[21];
    cin >> str;
    reverseStrings(n-1);
    cout << str << endl;
}

int main() {
    int n;
    cin >> n;
    reverseStrings(n);
}