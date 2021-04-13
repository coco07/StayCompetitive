#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {       //use of while is giving error in CodeChef IDE
        int n;
        cin >> n;
        int a[n][n];
        for (int row = 0; row < n; row++) {
            for (int col = 0; col <= row; col++) {
                cin >> a[row][col];
            }
        }
        for (int row = n - 2; row >= 0; row--) {        // (n-2) because we are starting to traverse from second last row
            for (int col = 0; col <= row; col++) {
                a[row][col] += max(a[row+1][col], a[row+1][col+1]);         //use of spaces like (row + 1) is giving error in CodeChef IDE
            }
        }
        cout << a[0][0] << endl;        //due to bottom-up approach a[0][0] will store the final result
    }
    return 0;
}