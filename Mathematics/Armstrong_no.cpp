#include<iostream>
using namespace std;

bool isArmstrong(int n){
    int copyN = n;
    int sumofcubes = 0;
     while(n !=  0){
        int dig = n% 10;
        sumofcubes += (dig*dig*dig);

        n = n/ 10;
     }
     return sumofcubes == copyN;
}

int main(){
    int n = 371;

    if(isArmstrong(n)){
        cout << "is an armstrong number\n";
    
    }else{
        cout << "Not an armstrong number\n";

    }
    return 0; 
}