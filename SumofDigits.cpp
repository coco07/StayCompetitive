#include <iostream>
//#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,d;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int sum=0;  //scope should be under for loop only otherwise WA
        cin>>n;
        while (n){
            sum=sum+n%10;
            n=n/10;
        }
        cout<<sum<<endl;
    }
    return 0;
}

/*  way2
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n;
    cin>>t;
    while (t--) {
        int sum=0;  //scope should be under while loop only otherwise WA
        cin>>n;
        while (n){
            sum=sum+n%10;
            n=n/10;
        }
        cout<<sum<<endl;
    }
    return 0;
}
 */

/*  way3
#include <iostream>
#include <cmath>    //to include logarithm
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n,sum=0;  //scope should be under while loop only otherwise WA
        cin>>n;
        int a = log10(n)+1;    //no_of_digits = log10(n)+1
        while (a--){
            sum=sum+n%10;
            n=n/10;
        }
        cout<<sum<<endl;
    }
    return 0;
}
*/