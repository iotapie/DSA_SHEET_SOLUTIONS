//any element in the pascal's triangle corresponds to the combination formula (mcn)
//for any element it is row -1 C column - 1
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    long long mcn(int m, int n){
        if(n==0){
            return 1;
        }
        //taking advantage of the symmetry of mcn
        if(m-n<n){
            n = m-n;
        }
        long long res = 1;
        for(int i=0;i<n;i++){
            res = res*(m-i);
            res = res/(i+1);
        }
        return res;
    }
    long long pascal(int row, int column){
        if(row<1 || column<1 || column>row){
            return -1;
        }
        return mcn(row-1, column-1);
    }
};
int main(){
    Solution obj;
    int r, c;
    cout<<"Enter the row and column:";
    cin>>r;
    cin>>c;
    if(obj.pascal(r, c) == -1){
        cout<<"Enter a valid entry."<<endl;
    }else{
        cout<<"The required element is:"<<obj.pascal(r, c)<<endl;
    }
    return 0;
}