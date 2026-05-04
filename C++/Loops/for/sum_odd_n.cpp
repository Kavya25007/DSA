#include<iostream>
using namespace std;
int main(){
    int i , n , sum;
    sum = 0;
    cout << "Enter n = "<< endl;
    cin >> n;
    for(int i = 0; i<=n; i++){
        if(i%2 != 0){
            sum += i;
        }

    }
    cout << "Sum = "<< sum<< endl;
    return 0;
}