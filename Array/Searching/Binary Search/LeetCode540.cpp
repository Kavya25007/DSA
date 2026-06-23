#include<iostream>
using namespace std;

int binarySearch(int arr[], int sz){
    int start = 0;
    int end = sz - 1;
    int mid = start + (end - start)/2;
    while(start <= end){
        if(arr[mid-1] != arr[mid] && arr[mid] != arr[mid + 1] ){
            return mid;
        }
        if(mid % 2==0){
            if(arr[mid-1] == arr[mid]){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        else{
            if(arr[mid - 1] == arr[mid]){
                start = mid+ 1;
            }
            else{
                end = mid - 1;
            }
        }
    }
    
    
}