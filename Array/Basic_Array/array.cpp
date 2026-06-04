#include<iostream>
using namespace std;

int main(){
    int marks[5] = { 100, 76 , 98 , 90 , 87};
    marks[2] = 99;

    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;


    return 0;

}