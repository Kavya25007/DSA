#include<iostream>
using namespace std;

int linearSearch(int arr[], int sz , int target ){
    int count = 0;
    for(  int i = 0; i < sz ; i++){
        if(arr[i] == target){
            count++;
        }
    }
    return count;
}

int main(){
    int sz = 7;
    int arr[sz] = {1, 2, 3, 2, 4, 2, 5};
    int target = 2;

    int result = linearSearch(arr , sz , target);
    cout << "Total count = "<< result << endl;

    return 0;
}