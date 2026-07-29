#include <bits/stdc++.h>
using namespace std;

bool checkArraySorted(vector<int>& arr, int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (checkArraySorted(arr, n))
        cout << "Array is Sorted";
    else
        cout << "Array is Not Sorted";

    return 0;
}