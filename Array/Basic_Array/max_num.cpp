#include<iostream>
using namespace std;

int main(){
    int size = 7;
    int nums[size]={ 67 , 1 , 56 , 9 , 1000, 87 , 909};
    int largest = INT8_MIN;

    for(int i = 0 ; i<size ; i++){
        if(nums[i] > largest){
            largest = nums[i];
        }
    }
    cout << "Largest = "<< largest << endl;

    return 0;
}