//to zero the entire row and column if any element is zero
//the time complexity will be O(N^2) and space complexity will be O(N+N)
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void zero_maker(int a[100][100], int m, int n){
//make hash arrays to store the values of those rows and columns which will be zero
        int rows[m] = {0}; 
        int columns[n] = {0};
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
    int a[100][100] = {
        {0, 1, 2, 0},
        {3, 4, 5, 2}, 
        {1, 3, 1, 5}
    };
    obj.zero_maker(a, 3, 4);
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0; 
}