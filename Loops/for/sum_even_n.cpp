#include<iostream>
using namespace std;
int main(){
    int i , n , sum;
    i = 1;
    sum = 0;
    cout <<"Enter n = "<< endl;
    cin >> n;
    while(i<=n){
        if(i%2==0){
            sum +=i;
        }
        i++;

    }cout<< "Sum = "<< sum<<endl;
    return 0;
}