//to zero the entire row and column if any element is zero
//the time complexity will be O(N^2) and space complexity will be O(N+N)
//space complexity is due to the extra row and column vectros created
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void zero_maker(vector<vector<int>>& a){
        //size of rows
        int m = a.size();
        //size of columns
        int n = a[0].size();
//make hash arrays to store the values of those rows and columns which will be zero
        vector<int> rows(m, 0); //or vector<int> rows(m) = {0}
        vector<int> columns(n, 0);   //or vector<int> columns(n) = {0}
//traverse the entire matrix and whenever an element is zero, hash map its respective row and column to the rows and columns arrays
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(a[i][j] == 0){
                    rows[i]++;
                    columns[j]++;
                }
            }
        }
//traverse the hash arrays and which ever elements are zero, zero the entire row or column corresponding to them
            for(int r=0;r<m;r++){
                if(rows[r]>0){
                    for(int c=0;c<n;c++){
                        a[r][c] = 0;
                    }
                }
            }
            for(int c=0;c<n;c++){
                if(columns[c]>0){
                    for(int r=0;r<m;r++){
                        a[r][c] = 0;
                    }
                }
            }
        }
};
int main(){
    Solution obj;
    vector<vector<int>> a = {
        {0, 1, 2, 0},
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