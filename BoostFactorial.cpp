#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
/*
 * Boost libraries are intended to be widely useful, and usable across a broad spectrum of applications. For example, they are helpful for handling large numbers having range beyond the long long, long double data type (264) in C++.
 * We can efficiently use this library in Competitive Programming but before this we must ensure that your online judge must support boost.
 */
using namespace boost::multiprecision;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cpp_int t;
    cin >> t;
    while (t--) {
        cpp_int n, x = 1;
        cin >> n;
        if (n == 0)
            cout << "1" << endl;
        else {
            for (cpp_int i = 1; i <= n; ++i) {
                x = x * i;
            }
            cout << x << endl;
        }
    }
    return 0;
}