#include <iostream>
//#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d, reverse = 0;
        cin >> n;
        int number = n;
        while (n) {
            d = n % 10;
            reverse = reverse * 10 + d;
            n /= 10;
        }
        if (number == reverse) {
            cout << "wins" << endl;
        } else cout << "loses" << endl;
    }
    return 0;
}