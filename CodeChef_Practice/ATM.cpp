// Note that this problem is for testing fast input-output.
// We can use scanf, printf in C langauge, which are quite fast in general :)
#include <iostream>
//#include <bits/stdc++.h>  --working on CodeChef
// Usually, you can use scanf/printf in C++.
// However, if you want to use cin/cout, it is usually slow.
// To make it faster. Use cin.tie(NULL) and set ios_base::sync_with_stdio(false)
// See the below code for details.
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int amount = 0;
    float balance = 0;
    cin >> amount >> balance;
    //cout << (amount % 5 == 0 && amount < balance ? (balance - amount) - 0.5 : balance);   --non-working on CodeChef
    //cout << (amount % 5 == 0 && (amount + 0.5) < balance ? (balance - amount) - 0.5 : balance);   --non-working on CodeChef
    cout << (amount % 5 == 0 && (amount + 0.5) <= balance ? (balance - amount) - 0.5 : balance);
    return 0;
}