#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter the marks = "<<endl;
    cin >> n;
    if((n >90) && (n <=100)) {
        cout <<"Excellent"<<endl;
        /* code */
    } else if (( n <= 90) && ( n > 80 )){
        cout <<" Very Good"<< endl;

    }  else if(( n <=80)  && (n > 70)){
        cout<< "Good"<< endl;
    }  else{
        cout<<"Average"<<endl;
    }
    return 0;
    
}