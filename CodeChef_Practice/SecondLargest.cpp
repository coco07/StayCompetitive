#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        long int a[3];
        for (int i = 0; i < 3; ++i) {
            cin>> a[i];
        }
        sort(a,a+3);
        cout<<a[1];
    }
    return 0;
}


/*  Another way - without using algorithms
#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		int a,b,c;
		cin>>a>>b>>c;
		if(a<b){
			if(a<c){
				if(b>c)
					cout<<c<<endl;
				else
					cout<<b<<endl;
			}
			else{
				cout<<a<<endl;
			}
		}
		else{
			if(b>c)
				cout<<b<<endl;
			else if(a<c)
				cout<<a<<endl;
			else
				cout<<c<<endl;
		}
	}
	return 0;
}
 */