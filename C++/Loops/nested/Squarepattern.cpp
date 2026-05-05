#include<iostream>
using namespace std;
int main(){
    int i , j, num;
    cout << "enter num = "<< endl;
    cin >> num;

    for( int i = 1; i <= num; i++){
        for (int j = 1 ; j<= num ; j++){
            cout << num;
            num++;  
        }
    }   cout << endl;
    return 0;
}