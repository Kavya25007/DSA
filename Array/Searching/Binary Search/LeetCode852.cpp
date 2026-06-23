#include<iostream>
using namespace std;

int peakIndex(int arr[], int sz) {
    int start = 1;
    int end = sz - 2;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]) {
            return mid;
        }

        if (arr[mid - 1] < arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return -1;
}

int main() {
    int sz = 7;
    int arr[] = {0, 2, 4, 9, 6, 5, 3};

    cout << peakIndex(arr, sz) << endl;

    return 0;
}