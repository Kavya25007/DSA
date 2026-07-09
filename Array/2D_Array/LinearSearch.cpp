#include<iostream>
using namespace std;

int linearsearch( int matrix[2][3], int target ){
    int row = 2;
    int column = 3;
    for(int i = 0 ; i < row ; i++){
        for(int j = 0; j<column ; j++){
            if(target == matrix[i][j]){
                return 1;
            }
            
            }
        }
        return -1;
    }
int main(){

    int matrix[2][3] = {{1,2,3} , {4,5,6}};
    int target = 5;

    cout << linearsearch(matrix, target) << endl;
    
    return 0;
}
