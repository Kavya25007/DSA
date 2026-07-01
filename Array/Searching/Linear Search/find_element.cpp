#include<iostream>
using namespace std;

int linearSearch(int arr[], int sz , int target){
    for(int i = 0; i < sz ; i++){
        if(arr[i] == target){
            return i;
        }
    }
return -1;
}

int main(){
    int sz = 5;
    int arr[sz] = {2, 5, 7, 9, 12};
    int target = 9;

    cout << linearSearch(arr, sz, target) <<  endl;

    return 0;
}