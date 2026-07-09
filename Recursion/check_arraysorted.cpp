#include<iostream>
using namespace std;

bool arraySorted(int arr[] , int n){
    if (n == 0 || n == 1){
    return true;
    }

    return arr[n-1] >= arr[n-2] && arraySorted(arr, n-1);

    }
int main(){
    int n = 8;
    int arr[n] = { 1,2 ,4 ,5, 6,3,8,9};
    cout << arraySorted(arr , n);
    return 0;
}
