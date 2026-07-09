#include<iostream>
using namespace std;

int getMinSum(int matrix[3][3], int rows, int cols) {

    int minRowSum = INT8_MAX; 
    for(int i = 0; i < rows; i++) {
        int rowSum = 0;

        for(int j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }

        minRowSum = min(minRowSum, rowSum);
    }

    return minRowSum;
}

int main() {

    int matrix[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int rows = 3;
    int cols = 3;

    int Sum = getMinSum(matrix, rows, cols);

    cout << "Min Sum = " << Sum << endl;

    return 0;
}