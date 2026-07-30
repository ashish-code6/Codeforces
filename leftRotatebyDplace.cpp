//Left rotate by array by d Place
#include<bits/stdc++.h>
using namespace std;

void leftRotateArrayByOne(vector<int>& arr, int n, int k) {

    k = k % n;   // Handle cases where k > n

    vector<int> temp;

    // Store first k elements
    for(int i = 0; i < k; i++) {
        temp.push_back(arr[i]);
    }

    // Shift remaining elements to the left
    for(int i = k; i < n; i++) {
        arr[i - k] = arr[i];
    }

    // Copy temp elements to the end
    for(int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }
}

int main() {

    int n;
    cin >> n;
    
    int k;
    cout<<"enter rotate By array by d place"<<endl;
    cin>>k;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // vector<int> result = leftRotateArrayByOne(arr, n ,k);
    leftRotateArrayByOne(arr, n ,k);

    cout << "Result: ";

    for(int x : arr) {
        cout << x << " ";
    }

    return 0;
}