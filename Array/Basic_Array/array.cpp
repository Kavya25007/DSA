#include<iostream>
using namespace std;
int main(){
    int marks[5] = { 98 , 87 , 59 , 79 , 82};
    marks[3] = 91;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    return 0;
}