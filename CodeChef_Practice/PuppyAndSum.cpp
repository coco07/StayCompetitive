#include <iostream>
//#include<bits/stdc++.h>
using namespace std;

int sum(int d, int n) {
    int add = 0;
    if (d == 1) {
        for (int i = 1; i <= n; ++i) {
            add += i;
        }
        return add;
    }
    for (int j = 1; j <= n; ++j) {
        add += j;
    }
    return sum(d - 1, add);
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int d, n;
        cin >> d >> n;
        cout << sum(d, n) << endl;
    }
    return 0;
}