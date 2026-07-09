#include<iostream>
using namespace std;

int sumofnums(int n){
    if(n == 0) return 0;
    else if( n == 1) return 1;
    else return n + sumofnums(n-1);
}

int main(){
    cout << sumofnums(4);
    return 0;
}