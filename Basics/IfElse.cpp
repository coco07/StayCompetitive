#include <iostream>

using namespace std;

int main() {
    int i=0, sum=0;
    while (i<11)
    {
        sum = sum + i;
        i++;
    };
    if (sum%2==0)
    {
        cout << "The sum: "<< sum << " is even!" << endl;
    } else
        cout << "The sum: "<< sum << " is odd!" << endl;
    return 0;
}

/* Another yet efficient way:

#include <iostream>

using namespace std;

int main() {
    int i=0, sum=0;
    while (i<11)
    {
        sum = sum + i;
        i++;
    };
    cout << "The sum: " << sum << (sum % 2 == 0 ? " is even!" : " is odd!") << endl;
    return 0;
}
 */