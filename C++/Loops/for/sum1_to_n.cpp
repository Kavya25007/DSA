#include<iostream>
using namespace std;
int main(){
    int i ,n, sum;
    sum = 0;
    cout <<"Enter n = ";
    cin >> n;
    for(int i =  0; i<=n ; i++){
        sum += i;
        if(i == 5){
            break;
        }
    }
    cout << "sum ="<< sum << endl;
     return 0;
}