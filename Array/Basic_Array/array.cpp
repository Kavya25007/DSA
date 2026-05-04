#include<iostream>
using namespace std;
int main(){
    int marks[5] = {56 , 100 , 57 , 89, 21};
    marks[4] = 99;

    cout << marks[0]<< endl;
    cout << marks[1]<< endl;
    cout << marks[2]<< endl;
    cout << marks[3]<< endl;
    cout << marks[4]<< endl;
    cout << marks[5]<< endl;

    return 0;
}