#include<iostream>
using namespace std;

int main() {
    int size = 5;
    int arr[size] = {23, 67, 7, 8, 7};

    int sum = 0;
    int product = 1;

    for(int i = 0; i < size; i++) {
        sum += arr[i];
        product *= arr[i];
    }

    cout << "Sum = " << sum << endl;
    cout << "Product = " << product << endl;

    return 0;
}