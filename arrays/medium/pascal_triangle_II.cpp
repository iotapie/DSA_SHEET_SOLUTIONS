//to print rows of a pascal triangle if we use combination to calculate each term the complexity will O(n^2)
//this approach reduces it to O(N)
//this approach can be noticed be seeing how each term in a row connects to the previous term
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<long long> pascal(int row){
        vector<long long> p;
        //the first and last terms are always one
        long long term = 1;
        p.push_back(1);
        for(int i=0;i<row-1;i++){
            //take any row and write the elements in the combination form( ex-6c0, 6c1, ... for the 7th row)
            //expand the combinations and see how each term relates to the previous one
            term = (term*(row-1-i))/(i+1);
            p.push_back(term);
        }
        return p;
    }
};
int main(){
    Solution obj;
    vector<long long> row;
    int row_num;
    cout<<"Which row would you like to print:";
    cin>>row_num;
    if(row_num < 1){
        cout<<"Row number must be greater than or equal to one."<<endl;
        return 0;
    }
    row = obj.pascal(row_num);
    for(auto x:row){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}