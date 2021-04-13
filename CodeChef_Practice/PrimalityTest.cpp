#include <iostream>
//#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, count=0;
        cin >> n;
        for (int i = 1; i <= n; ++i) {      //this also proves 1 is not a prime number.
            if (n % i == 0){
                count++;
            }
        }
        if (count == 2) {
            cout << "yes" << endl;
        } else cout << "no" << endl;
    }
    return 0;
}