#include<iostream>
#include<climits>
using namespace std;
int main(){
    int nums[] = {1 , 78, -90 , 78 , 98};
    int size = sizeof(nums) / sizeof(nums[0]);
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i = 0; i < size; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
        }
        if(nums[i] > largest){
            largest = nums[i];
        }
    }

    cout << "Smallest = " << smallest << endl;
    cout << "Largest = " << largest << endl;

    return 0;

}