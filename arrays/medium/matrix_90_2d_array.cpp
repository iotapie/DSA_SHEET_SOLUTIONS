//in a brute force approach we can createe another matrix to store the rows and columns
//the first row becomes the last column and so on, this gives a space complexity of O(N^2)
//the optimal makes the space comp. constant, we do this by rotating the matrix in place
//to rotate a matrix by 90 degrees, we can simply transpose it and reverse the rows
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void rotate(int (&a)[100][100], int row){
        int column = row;
        int i, j;
        //reverse each column of the matrix
        for(int c=0;c<column;c++){
            i = 0;
            j = row-1;
            while(i<=j){
                swap(a[i][c], a[j][c]);
                i++;
                j--;
            }
        }
        //transpose the matrix i.e. swap elements about the main diagonal
        for(int r=1;r<row;r++){
            for(int c=0;c<r;c++){
                swap(a[r][c], a[c][r]);
            }
        }
    }
};
int main(){
    Solution obj;
    int a[100][100] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}, 
        {13, 14, 15, 16}
    };
    obj.rotate(a, 4);
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}