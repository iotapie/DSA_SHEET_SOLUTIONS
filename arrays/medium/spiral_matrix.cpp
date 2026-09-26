//to print a matrix in spiral manner treat it like a rectangle inside a rectangle 
//make four variables to control the four corners
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void spiral(int a[100][100], int row, int column){
        int sr = 0;
        int sc = 0;
        int er = row-1;
        int ec = column -1;
        //keep looping until we are out of rows and columns
        while(sr <= er && sc <= ec){
            //print the top edge
            for(int i=sc;i<=ec;i++){
                cout<<a[sr][i]<<" ";
            }
            //make the row shorter from the start
            sr++;
            //print the right edge
            for(int i=sr;i<=er;i++){
                cout<<a[i][ec]<<" ";
            }
            //make the column shorter from the end
            ec--;
            //check if a row still remains
            if(sr <= er){
            //print the bottom edge
            for(int i=ec;i>=sc;i--){
                cout<<a[er][i]<<" ";
            }
            //make the row smaller from the end
            er--;
            }
            //check if a column still remains
            if(sc <= ec ){
            //print the left edge
            for(int i=er;i>=sr;i--){
                cout<<a[i][sc]<<" ";
            }
            //make the column smaller from the start
            sc++;
        }
        } 
    }
};
int main(){
    Solution obj;
    int a[100][100];
    int r, c;
    cout<<"Enter the size of the rows and columns:";
    cin>>r;
    cin>>c;
    cout<<"Enter the matrix:";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    obj.spiral(a, r, c);
    cout<<endl;
    return 0;
}