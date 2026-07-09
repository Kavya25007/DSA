#include<iostream>
using namespace std;

int getMaxSum(int matrix[3][3] , int rows , int cols){
    int maxRowSum = INT8_MIN;

    for(int i = 0 ; i< rows ; i++){
        int rowSum = 0;
        for(int j = 0; j< cols; j++){
            rowSum += matrix[i][j];
        
        }maxRowSum = max(maxRowSum , rowSum);
    }
    return maxRowSum;
}
int main(){
    int matrix[3][3] = {{1,2,3} , {4,5,6} , {7,8,9}};
    int rows = 3;
    int cols = 3;

    int Sum = getMaxSum(matrix , rows , cols);
    cout << "Max Sum = "<< Sum << endl;
    return 0;
}