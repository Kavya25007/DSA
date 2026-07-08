#include<iostream>
using namespace std;

int revNum(int n){
    int revNum = 0;
    
    while(n != 0){
        int digit = n % 10;

        if(revNum > INT8_MAX/10 || revNum < INT8_MIN/10 ){
            return 0;
        }

        revNum = (revNum * 10) + digit;
        n = n / 10;
    }

    return revNum;
}

int main(){
    cout<< revNum(4357)<< endl;
    return 0;
}