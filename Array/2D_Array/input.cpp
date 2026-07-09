#include<iostream>
using namespace std;

int main(){

    int matrix[2][3];
    int rows = 2;
    int columns = 3;

    for(int i = 0; i < rows ; i++){
        for(int j = 0; j< columns; j++){
           cin >> matrix[i][j];
        }

    }

    for(int i = 0; i < rows ; i++){
        for(int j = 0; j< columns; j++){
           cout << matrix[i][j]<< " "; 
        }
        cout << endl;
    }
    cout << endl;

    return 0;

}