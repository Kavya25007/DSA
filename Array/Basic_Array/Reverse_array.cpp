#include<iostream>
#include<algorithm>
using namespace std;
 
void reverseArray(int size, int arr[]){
    int start = 0;
    int end = size - 1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int size = 5;
    int arr[size] = {6 , 3 ,4  ,9 , 8 };
    for(int i = 0; i < size ; i++){
        cout << arr[i] << " ";
    }
    cout<< endl;

    reverseArray(size, arr);

    for(int i = 0; i < size ; i++){
        cout << arr[i] << " ";
    }
    cout<< endl;
    return 0;
}