#include<iostream>
using namespace std;

int main() {
    int size = 5;
    int array[size] = {1, 2, 3, 2, 1};

    int start = 0;
    int end = size - 1;

    while(start < end) {
        if(array[start] != array[end]) {
            cout << "Not Palindrome" << endl;
            return 0;
        }

        start++;
        end--;
    }

    cout << "Palindrome" << endl;

    return 0;
}