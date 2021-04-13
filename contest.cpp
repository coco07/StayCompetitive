#include <bits/stdc++.h>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--){
        ll r, f, distinct=1;
        cin>> r >> f;
        ll a[r];
        for (ll i = 0; i < r; ++i) {
            cin>>a[i];
        }
        sort(a, a+r);
        for (ll j = 0; j < r; ++j) {
            if ((a[j+1]-a[j])>0 && a[j+1]<=f && a[j]<=f){
                distinct++;
            }
        }
        if (distinct<f){
            cout<< "Yes" <<endl;
        } else cout<< "No" <<endl;
    }
    return 0;
}