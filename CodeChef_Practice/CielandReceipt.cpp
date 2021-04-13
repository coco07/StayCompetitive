#include <iostream>
//#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int cash, menu = 2048, count = 0;
        cin >> cash;
        while (cash) {
            if (cash >= menu) {
                count++;
                cash = cash - menu;
            } else {
                menu = menu / 2;
            }
        }
        cout << count << endl;
    }
    return 0;
}


/* Another way
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;

	cin>>t;
	while(t--){
	    int i=0,sum=0,menu=2048;
	    cin>>n;
	    while(n!=0){
	        sum+=n/menu;
	        n=n%menu;
	        menu=menu/2;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
 */


/*  same -by using array
#include <iostream>
//#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int cash[t];
    for (int i = 0; i < t; ++i) {
        cin >> cash[i];
    }
    for (int j = 0; j < t; ++j) {
        int count=0, menu = 2048;
        while (cash[j]) {
            if (cash[j] >= menu) {
                count++;
                cash[j] = cash[j] - menu;
            }
            else{
                menu = menu / 2;
            }
        }
        cout << count << endl;
    }
    return 0;
}
*/