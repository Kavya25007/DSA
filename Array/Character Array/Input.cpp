#include<iostream>
using namespace std;

int main(){
    char str[100];

    cout << "Enter the word = "<< endl;
    cin.getline(str , 100, '*');

    for( char ch : str){
        cout << ch << "";
    }

    cout << endl;
    

    return 0;
}