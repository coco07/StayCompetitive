#include <iostream>
//#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;
    while(t--) {
        cin>>n;
        n = n >> 1;     //right shift operator (1010->101 i.e. it will divide the number by 2 and outputs the truncated value)
        cout<< n+1 <<endl;
    }
}


/*  Another efficient way
#include <iostream>
//#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, max=0;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        cout << (n % 2 == 0 ? (n / 2) + 1 : (n + 1) / 2) << endl;
    }
    return 0;
}
*/

/*  TLE
#include <iostream>
//#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, max=0;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        int a[n], b=n;
        for (int i = 1; i <= n; ++i) {
            a[i] = n % i;
            if (a[i] >= max){
                max = a[i];
            }
        }
        cout<< (b-max) <<endl;
    }
    return 0;
}
 */