//Returns index number of min or max value

#include<iostream>
using namespace std;
int main(){
    int size = 6;
    int nums[size] = {31 , 87, 90 , 67 , 34 , 61};
    int largestIndex = 0;

    for(int i = 0; i <  size ; i++){
        if(nums[i] > nums[largestIndex]){
            largestIndex = i;
        }
    }
    cout << "Largest Index = "<< largestIndex << endl;
    return 0;
}

