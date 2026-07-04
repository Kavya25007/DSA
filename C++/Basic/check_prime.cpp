#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int n;

    cout << "Enter number = " << endl;
    cin >> n;

    bool isPrime = true;

    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime)
        cout << "N is prime" << endl;
    else
        cout << "N is not prime" << endl;

    return 0;
}