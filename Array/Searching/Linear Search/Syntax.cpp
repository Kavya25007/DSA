#include<iostream>
using namespace std;
int main(){
    int size = 7;
    int nums[size] = { 3 , 78 , 8 , 4 , 90 , 34 , 12};
    int target = 90;

    for(int i = 0 ; i < size ; i++){
        if(nums[i] == target){
            cout << "Index = " << i << endl;
            return 0;
        }
    }
    
    cout << "Target not found" << endl;
    return 0;
}