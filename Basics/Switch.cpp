#include <iostream>

using namespace std;

int main() {
    int n;
    do {
        cout<< "Select Valid Choice From Below: "<< endl;
        cout << "1. Play Game " << endl;
        cout << "2. Settings " << endl;
        cout << "3. Exit " << endl;
        cin >> n;
        switch (n) {
            case 1:
                cout << "Starting the Game!" << endl;
                break;
            case 2:
                cout << "Here are your Settings!" << endl;
                break;
            case 3:
                cout << "Exiting? Come back again!" << endl;
                break;
            default:
                cout << "Please select a valid choice!" << endl;
                break;
        }
    }
    while (n!=3);
    return 0;
}