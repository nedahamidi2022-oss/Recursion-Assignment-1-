#include <iostream>
using namespace std;

void printSeq(int n, int k, int arr[], int index) {
    if (index == n) {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
        return;
    }

    for (int i = 1; i <= k; i++) {
        arr[index] = i;
        printSeq(n, k, arr, index+1);
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    int arr[100];
    printSeq(n, k, arr, 0);
}