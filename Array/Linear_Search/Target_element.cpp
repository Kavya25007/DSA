#include <iostream>
using namespace std;

int linearSearch(int arr[], int sz, int target) {
    for (int i = 0; i < sz; i++) {
        if (arr[i] == target) {
            return 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2};
    int sz = 6;
    int target = 8;

    cout << linearSearch(arr, sz, target) << endl;
    return 0;
}
