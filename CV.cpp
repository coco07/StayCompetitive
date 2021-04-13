#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, count = 0;
        cin >> n;
        string s;
        cin >> s;
        for (unsigned int i = 0; i < s.length(); i++) {
            if ((s[i] != 'a' && s[i] != 'e' && s[i] != 'o' && s[i] != 'i' && s[i] != 'u') &&
                (s[i + 1] == 'a' || s[i + 1] == 'e' || s[i + 1] == 'u' || s[i + 1] == 'i' || s[i + 1] == 'o')) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}