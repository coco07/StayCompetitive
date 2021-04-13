#include <iostream>
//#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, odd = 0, even = 0;
    cin >> t;
    int a[t];
    for (int i = 0; i < t; ++i) {
        cin >> a[i];
        if (a[i] % 2 == 0) {
            even++;
        } else odd++;
    }
    if (even > odd) {
        cout << "READY FOR BATTLE" << endl;
    } else cout << "NOT READY" << endl;
    return 0;
}