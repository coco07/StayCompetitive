#include <iostream>
using namespace std;

int main() {
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        int count=0;
        cin>>s;
        for (int i = 0; i<s.length(); ++i) {
            if (s[i] == '4')
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}


/*  Another efficient way
#include <iostream>
//#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d, count = 0;
        cin >> n;
        while (n > 0) {
            d = n % 10;
            if (d == 4) {
                count++;
            }
            n = n / 10;
        }
        cout << count << endl;
    }
    return 0;
}
 */


/*  Runtime Error/TLE
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n, count=0;
        cin>>n;
        int d = log10(n)+1;
        int a[d];
        for (int i = d-1; i>=0; --i) {
            a[i]=n%10;
            n=n/10;
        }
        for (int i = 0; i<d; ++i) {
            if (a[i] == 4)
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
 */