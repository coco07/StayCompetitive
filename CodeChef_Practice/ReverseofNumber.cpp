#include <iostream>
//#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d, reverse = 0;
        cin >> n;
        while (n>0) {
            d = n % 10;
            n = n / 10;
            reverse = reverse * 10 + d;
        }
        cout << reverse << endl;
    }
    return 0;
}