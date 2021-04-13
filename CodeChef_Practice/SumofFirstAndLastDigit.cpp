#include<iostream>  // string.h header is already included in iostream header to use length function for string
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int n=s.length()-1;
        int fd=s[0]-'0';
        int ld=s[n]-'0';
        int sum=fd+ld;
        cout<<sum<<endl;
    }
    return 0;
}

/*  Another way (string.h header needs to be included to use strlen function for char array)
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int t;
	char a[10];
	cin>>t;
	while(t--)
	{
		cin>>a;
		int fd=a[0]-'0';
		int ld=a[strlen(a)-1]-'0';
		int sum=fd+ld;
		cout<<sum<<endl;
	}
	return 0;
}
 */


/*  Another way
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a = n;
        int sum = 0;
        int digit = a %10;
        sum += digit;
        while(a)
        {
            digit = a%10;
            a = a/10;
        }
        sum += digit;
        cout<<sum<<endl;
    }
    return 0;
}
*/

/* Runtime Error/TLE
#include <iostream>
#include <cmath>
//#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int d = log10(n) + 1;
        int a[d], sum = 0, b=n;
        for (int j = d; j > 0; --j) {
            a[j] = n % 10;
            n = n / 10;
        }
        if (d>1){
            sum = a[1] + a[d];
            cout << sum << endl;
        } else cout << b << endl;
    }
    return 0;
}
 */