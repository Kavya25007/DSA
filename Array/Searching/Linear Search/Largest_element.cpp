#include<iostream>
using namespace std;

int linearSearch(int arr[] , int sz ){
    int largest = INT8_MIN;
    for(int i = 0; i < sz; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main(){
    int sz = 5;
    int arr[sz] = { 7 , 2, 9 , 3, 0};

    int largest_element = linearSearch(arr , sz );
    cout << "Largest Element = "<<largest_element<< endl;

    return 0;
}