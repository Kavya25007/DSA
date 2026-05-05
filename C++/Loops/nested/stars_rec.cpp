#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n = ";
    cin >> n;

    for(int i = 1; i <= 5; i++){
        int m = n;

        for(int j = 1; j <= m; j++){
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}