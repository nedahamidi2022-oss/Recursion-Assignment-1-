#include <iostream>
using namespace std;

void permute(char str[], int l, int r) {
    if (l == r) {
        cout << str << endl;
        return;
    }

    for (int i = l; i <= r; i++) {
        swap(str[l], str[i]);
        permute(str, l+1, r);
        swap(str[l], str[i]);
    }
}

int main() {
    char str[100];
    cin >> str;
    int n = 0;
    while(str[n] != '\0') n++;

    permute(str, 0, n-1);
}