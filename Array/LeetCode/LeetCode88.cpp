/*Algorithm (Backward Merge using index)

Step 1: Initialize pointers

    i = m - 1      // last valid element of a1
    j = n - 1      // last element of a2
    index = m + n - 1   // last position of a1

Step 2: Compare from back
    while i >= 0 AND j >= 0:

    If a1[i] >= a2[j]
        a1[index] = a1[i]
        i--
        index--

    Else:
        a1[index] = a2[j]
        j--
        index--
Step 3: Copy remaining a2 elements
    while j >= 0:
        a1[index] = a2[j]
        j--
        index--
*/

//Code
#include <iostream>
using namespace std;

void merge2array(int arr1[], int arr2[], int m, int n) {

    int index = m + n - 1;
    int i = m - 1;
    int j = n - 1;

    while(i >= 0 && j >= 0) {

        if(arr1[i] >= arr2[j]) {
            arr1[index] = arr1[i];
            i--;
        }
        else {
            arr1[index] = arr2[j];
            j--;
        }
        index--;
    }

    while(j >= 0) {
        arr1[index] = arr2[j];
        j--;
        index--;
    }
}

int main() {

    int m = 3, n = 3;

    int arr1[6] = {1, 4, 6, 0, 0, 0};
    int arr2[3] = {2, 3, 5};

    merge2array(arr1, arr2, m, n);

    cout << "After merging = ";
    for(int i = 0; i < m + n; i++) {
        cout << arr1[i] << " ";
    }

    return 0;
}