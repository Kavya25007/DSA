#include<iostream>
using namespace std;

void printnums(int n){
    if(n <= 0){
        return;
    }

    if(n == 1){
        cout << "1 ";
        return;
    }

    cout << n << " ";
    printnums(n - 1);
}

int main(){
    printnums(4);
    return 0;
}