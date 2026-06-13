#include<iostream>
#include<climits>
using namespace std;
int main(){
    int size = 5;
    int nums[size] = { 10 , 20 , 1 , 79 , 2};
    int smallest = INT_MAX;

    for(int i = 0; i < size ; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
        }
    }
    cout << "Smallest = "<< smallest << endl;
    return 0;
}