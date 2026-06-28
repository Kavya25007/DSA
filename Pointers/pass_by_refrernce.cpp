#include<iostream>
using namespace std;

void changeA(int* ptr){ //pass by reference using pointer
// void changeA(int &b){ //pass by refrence using alias
    *ptr = 20;
    // b = 20;
}

int main(){
    int a = 10;
    changeA(&a);

    cout << "inside main function : "<< a << endl; //m20
    return 0;
}
