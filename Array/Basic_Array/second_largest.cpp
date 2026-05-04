#include<iostream>
using namespace std;

int main(){

    int arr[] = {4,5,6,2,3,8};
    int sz = 6;

    int max = arr[0];
    int second_max = -1;

    for(int i = 1 ; i < sz ; i++){
        if(arr[i] > max){
            second_max = max;
            max = arr[i];
        }
        else if(arr[i] < max && arr[i] > second_max){
            second_max = arr[i];
        }
    }

    cout << "Second max: " << second_max << endl;

    return 0;
}