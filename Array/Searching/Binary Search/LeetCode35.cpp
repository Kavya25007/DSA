#include<iostream>
using namespace std;

int binarySearch(int arr[] , int sz, int target){
    int start = 0;
    int end = sz - 1;

    while(start <= end){
        int mid = start + (end - start)/2;
        
            if(arr[mid] == target){
                return mid;

            }
            else if(arr[mid] < target){
                start =  mid + 1;
            }
            else{
                end =  mid-1;
            }


    }
    return start;
}

int main(){
    int sz = 6;
    int arr[sz] = { 1 ,2 ,3 ,5, 8, 9,};
    int target = 7;

    cout <<"Index = "<< binarySearch(arr , sz , target)<< endl;

    return 0;
}