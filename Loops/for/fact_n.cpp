#include<iostream>
using namespace std;
int main(){
    int i , n , fact;
    fact = 1;
    cout << "Enter n = "<< endl;
    cin >> n;
    for(int i = 1; i <= n ; i++){
         fact = fact*i;
        
        }
    cout << "Factorial = "<< fact << endl;
    return 0;
    
}