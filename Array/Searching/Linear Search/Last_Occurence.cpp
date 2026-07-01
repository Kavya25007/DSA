#include<iostream>
using namespace std;

int linearSearch(int arr[], int sz , int target){
    int index = -1;
    for(int i = 0 ; i < sz ; i++){
        if(arr[i] == target){
            index = i;
        }
    }
    return index;
}

int main(){
    int sz = 6 ;
    int arr[sz] ={3 ,4 ,2, 3, 5 ,3};
    int target = 3;

    int results = linearSearch( arr , sz , target);
    cout << "Last Occurence = "<< results << endl;

    return 0;
}