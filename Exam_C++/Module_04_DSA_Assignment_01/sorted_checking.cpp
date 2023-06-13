

#include <bits/stdc++.h>
using namespace std;


bool checkSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]){
            return false;
        }
    }
    return true;
}

int main() {
    int t, n;
    cin >> t;

    while (t--) {

        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int result = checkSorted(arr, n);

        if (result){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
