//in a brute force approach we can createe another matrix to store the rows and columns
//the first row becomes the last column and so on, this gives a space complexity of O(N^2)
//the optimal makes the space comp. constant, we do this by rotating the matrix in place
//to rotate a matrix by 90 degrees, we can simply transpose it and reverse the rows
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void rotate_90(vector<vector<int>>& a){
        int row = a.size();
        int column = a[0].size();
        //transpose the entire matrix
        //set the limits for the lower triangular matrix and swap with elements in the upper triangular matrix
        for(int r=1;r<row;r++){
            for(int c=0;c<r;c++){
                swap(a[r][c], a[c][r]);
            }
        }
        //reverse each row of the matrix
        for(int r=0;r<row;r++){
            int i = 0;
            int j = column-1;
            while(i<j){
                swap(a[r][i], a[r][j]);
                i++;
                j--;
            }
        }
        //built in function can be used to reverse as well
        /*for(int r=0; r<row; r++){
             reverse(a[r].begin(), a[r].end());
        }*/ 
    }
};
int main(){
    Solution obj;
    vector<vector<int>> a = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    obj.rotate_90(a);
    for(auto row:a){
        for(auto element:row){
            cout<<element<<" ";
        }
        cout<<endl;
    }
    return 0;
}