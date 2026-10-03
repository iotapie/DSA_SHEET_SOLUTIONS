//to zero the entire row and column if any element is zero
//the time complexity will be O(N^2) and space complexity will be O(1)
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void zero_maker(vector<vector<int>>& a){
        //size of rows
        int m = a.size();
        //size of columns
        int n = a[0].size();
//since the a[0][0] element is common to both the rows and columns, we use it zero the rows
//for the columns we make a seperate variable
        int col0 = -1;
//traverse the entire matrix and whenever an element is zero
//make the first element corresponding to the row and column zero
        for(int i=0;i<m;i++){
//if any element in the zeroth column is zero we update col0 to zero
            if(a[i][0] == 0){
                col0 = 0;
            }
            for(int j=1;j<n;j++){
                if(a[i][j] == 0){
                    a[i][0] = 0;
                    a[0][j] = 0;
                }
            }
        }
//since we have made the first element of the first row and first column zero as needed
//we just search the first row and column and make the entire corresponding column and row zero
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(a[i][0] == 0 || a[0][j] == 0){
                    a[i][j] = 0;
                }
            }
        }
//if any element in the zeroth row is zero, this loop runs
        if(a[0][0] == 0){
            for(int c=1;c<n;c++){
                a[0][c] = 0;
            }
        }
//if any element in the zeroth column is zero, this loop runs
        if(col0 == 0){
            for(int r=0;r<m;r++){
                a[r][0] = 0;
            }
        }
    }
};
int main(){
    Solution obj;
    vector<vector<int>> a = {
        {1, 1, 2, 0},
        {3, 4, 5, 2}, 
        {1, 3, 1, 5}
    };
    obj.zero_maker(a);
    for(auto row:a){
        for(auto element:row){
            cout<<element<<" ";
        }
        cout<<endl;
    }
    return 0; 
}