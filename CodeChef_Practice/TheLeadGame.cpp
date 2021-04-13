#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, max = 0, a = 0, b = 0;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int p1, p2;
        cin >> p1 >> p2;
        a += p1;
        b += p2;
        if (abs(a - b) > abs(max)) {
            max = a - b;
        }
    }
    cout << (max < 0 ? "2 " : "1 ") << abs(max);
    return 0;
}


/*  Another readable way
#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int t; cin>>t;
    int a[t], b[t], winner, lead=0, p1=0, p2=0;
    for(int i=0;i<t;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<t;i++)
    {
        p1+=a[i];
        p2+=b[i];
        if(lead<abs(p1-p2))
        {
            if(p1<p2)
                winner=2;
            else
                winner=1;
            lead=abs(p1-p2);
        }
    }
    cout<<winner<<" "<<lead<<endl;
    return 0;
}
 */