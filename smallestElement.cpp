#include <bits/stdc++.h>
using namespace std;

int smallestElement(const vector<int>& arr, int n) {
    int smallest = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (smallest > arr[i]) {
            smallest = arr[i];
        }
    }
    return smallest;
}

int main() {
    int n;
    cin >> n;
    
    // Edge case
    if (n <= 0) {
        return 0;
    }
    
    vector<int> arr(n);\
    
    for (int i = 0; i < n; i++) { 
        cin >> arr[i];
    }
    
    int result = smallestElement(arr, n);
    
    cout << "Smallest Element: " << result << endl;
    
    return 0;
}