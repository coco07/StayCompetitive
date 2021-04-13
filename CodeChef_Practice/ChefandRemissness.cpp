#include <iostream>
//#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int a, b, min, max;
        cin>> a >> b;
        if (a<b){
            min = b;
        } else min = a;
        max = a + b;
        cout<< min << " " << max <<endl;
    }
    return 0;
}