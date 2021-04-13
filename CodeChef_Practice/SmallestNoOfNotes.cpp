#include <iostream>
//#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, notes[]={1,2,5,10,50,100};
    cin >> t;
    while (t--){
        int i = sizeof(notes)/sizeof(notes[0])-1;
        int cash, count=0;
        cin>>cash;
        while (cash){
            if(cash>=notes[i]){
                count++;
                cash = cash - notes[i];
            } else i--;
        }
        cout<< count << endl;
    }
    return 0;
}