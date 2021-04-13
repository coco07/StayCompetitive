#include <iostream>
//#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, x = 1;
        cin >> n;
        if (n == 0)
            cout << "1" << endl;
        else {
            for (int i = 1; i <= n; ++i) {
                x = x * i;
            }
            cout << x << endl;
        }
    }
    return 0;
}