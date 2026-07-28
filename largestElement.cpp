#include <iostream>
#include <vector>
using namespace std;

int largestElement(const vector<int>& arr, int n) {
    int largest = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int n;
    cin >> n;
    
    if (n <= 0) return 0; // Handle edge case for empty input
    
    vector<int> arr(n); // Specify size 'n' so arr[i] is valid
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int result = largestElement(arr, n);
    cout << "Largest element: " << result << endl;
    
    return 0;
}