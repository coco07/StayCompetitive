#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, a = 0, b = 0, c = 0;
        string s;
        cin >> n >> s;
        for (char i : s) {              //we can traverse through string by int array as well as char array
            if (i == 'Y')       a++;
            else if (i == 'N')  b++;
            else                c++;
        }
        if (a > 0)          cout << "NOT INDIAN" << endl;
        else if (b == n)    cout << "NOT SURE" << endl;
        else if (c > 0)     cout << "INDIAN" << endl;
    }
    return 0;
}