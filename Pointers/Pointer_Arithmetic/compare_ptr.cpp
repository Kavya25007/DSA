#include<iostream>
using namespace std;
int main(){
    int arr[5] = { 10 , 20 , 30 ,  40 , 50};

    /*int *ptr1 = &arr[1];
    int *ptr2 = &arr[2];*/
    int *ptr1 ;
    int *ptr2 ;

    cout << "Ptr1 address = "<<*ptr1<< endl;
    cout << "Ptr2 address = "<<*ptr2<< endl;

    cout << " Comparison Results"<< endl;

    cout << "p1 == p2 : " << (ptr1 == ptr2) << endl;
    cout << "p1 != p2 : " << (ptr1 != ptr2) << endl;
    cout << "p1 <  p2 : " << (ptr1 < ptr2) << endl;
    cout << "p1 >  p2 : " << (ptr1 > ptr2) << endl;
    cout << "p1 <= p2 : " << (ptr1 <= ptr2) << endl;
    cout << "p1 >= p2 : " << (ptr1 >= ptr2) << endl;

    return 0;
}


