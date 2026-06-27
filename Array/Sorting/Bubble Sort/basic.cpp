#include<iostream>
using namespace std;

void bubbleSort(int arr[] , int sz ){
    for(int i = 0; i< sz-1 ; i++){
        bool isSwap = false;
        for(int j = 0 ; j < sz-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
                isSwap = true;
            }
            
            
        }
        if(!isSwap){
            return ;
        }

    }

}
void printArray(int arr[] ,int sz){
    for(int i = 0; i < sz; i++){
        cout << arr[i]<< " ";
    }
    cout << endl;
}

int main(){
    const int sz = 5;
    int arr[sz]= { 8 , 12 , 33,  45,  67};

    bubbleSort(arr , sz);
    printArray(arr , sz);

    for(int i = 0; i < sz; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;

}