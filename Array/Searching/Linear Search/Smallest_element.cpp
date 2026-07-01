#include<iostream>
using namespace std;

int linearSearch(int arr[], int sz){
    int smallest = INT8_MAX;
    for(int i = 0; i <sz ; i++){
        if(arr[i]< smallest){
            smallest = arr[i];
        }
    }
    return smallest;
}

int main(){
    int sz = 5;
    int arr[sz] = {7, 2, 9, 3, 0};

    int result = linearSearch(arr , sz);
    cout << "Smallest element = "<< result << endl;
    
    return 0;

}