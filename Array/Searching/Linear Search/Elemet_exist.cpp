#include<iostream>
using namespace std;

bool linearSearch( int arr[] , int sz , int target){
    for(int i = 0; i < sz ; i++){
        if(arr[i] == target){
            return true;

        }
    }
    return false;

}

int main(){
    int sz = 7 ;
    int arr[sz] = { 56 , 23, 4, 7, 3,4,677};
    int target = 677;

    cout <<  linearSearch(arr , sz , target)<< endl;

    return 0;

}