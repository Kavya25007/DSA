#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 0){
        return 0;
    }
    else if(n == 1 ){
        return 1;
    }
    else{
        return n * (n -1);
    }
}

int main(){
    cout << factorial(4)<< endl;
    return 0;
}