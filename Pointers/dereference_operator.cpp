//  Dereference operator(*) = it gives the value stored at particular address.

#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int* ptr = &a;
    int** parentptr = &ptr;

    cout << "Value stored at a = "<<*(&a) << endl;
    cout << " Value stored at a = " << *(ptr)<< endl;
    cout << "Value stored at ptr = "<< *(parentptr) << endl;
    cout << "Value stored at a = "<< **(parentptr) << endl;

    return 0;
}
