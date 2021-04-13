#include <iostream>
//#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    char a[t];
    for (int i = 0; i < t; ++i) {
        cin >> a[i];
    }
    for (int j = 0; j < t; ++j) {
        if (a[j] == 'B' || a[j] == 'b') {
            cout << "BattleShip" << endl;
        } else if (a[j] == 'C' || a[j] == 'c') {
            cout << "Cruiser" << endl;
        } else if (a[j] == 'D' || a[j] == 'd') {
            cout << "Destroyer" << endl;
        } else if (a[j] == 'F' || a[j] == 'f') {
            cout << "Frigate" << endl;
        }
    }
    return 0;
}