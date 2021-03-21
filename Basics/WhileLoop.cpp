#include <iostream>

using namespace std;

int main() {
    int i=0, sum=0;
    while (i<11)
    {
        sum = sum + i;
        i++;
    };
    cout << sum << endl;
    return 0;
}