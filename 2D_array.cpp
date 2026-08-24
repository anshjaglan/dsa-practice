#include<iostream>
#include <climits>
#include<vector>
using namespace std;



    // cout << " Enter value of matrix : " << endl;
    // for(int i = 0; i < rows; i++){
    //     for(int j = 0; j < cols; j++){
            
    //         cin >> matrix[i][j];
    //     }
    // }

    bool linearSearch (int mat[][3], int rows, int cols, int key){
        for(int i = 0 ; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(mat[i][j] == key){
                    return true;
                }
            }
        }
        return false;
    }

    int getMaxSum(int mat[][3], int rows, int cols){
        int maxColSum = INT_MIN;
        
        for(int j = 0; j < rows; j++){
              int colSumI = 0;
            for(int i = 0; i < cols ; i++){
              
                colSumI += mat[i][j];

            }
            
             maxColSum = max(maxColSum, colSumI);
           
                }
                return maxColSum;
    }

    int diagonalSum(int mat[][4], int n){
        int sum = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == j){
                   sum += mat[i][j];
                }
                else if(j == n-1-i ){
                 sum += mat[i][j];
                }
            }
           
        }
        return sum;
    }
int main(){
    vector<vector<int>> mat = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15,16}};
    // int matrix[4][4]={{1, 2, 3, 4}, {5, 6, 7, 8, 11}, {9, 10, 11, 12}, {13, 14, 15,16}};
    // int n = 4;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << mat[i][j] << " ";

        }
        cout << endl;
    }
   
   
    //   cout << diagonalSum(matrix, n) << endl;

    return 0;
}