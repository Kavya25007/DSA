#include<iostream>
using namespace std;
int main(){
    int size = 5;
    int arr[size] = {65 , 87 , 90 , 54 , 61};
    int smallest = INT8_MAX;
    int largest = INT8_MIN;

    for(int i = 0 ; i<size ; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
        if(arr[i] > largest){
            largest = arr[i];
        }

    }
    cout << "Smallest = "<<smallest<< endl;
    cout << "Largest = "<<largest<<endl;
    swap(smallest , largest);
    cout << "After swap:" <<endl;
    cout << "Smallest = "<< smallest << endl;
    cout << "Largest = "<< largest << endl;


    return 0;

}   