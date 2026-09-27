//time complexity will be O(N^3)
//generate rows and use a for loop to print each row 
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<long long> pascal(int row){
        vector<long long> p;
        long long term = 1;
        p.push_back(term);
        for(int i=0;i<row-1;i++){
            term = (term*(row-1-i))/(i+1);
            p.push_back(term);
        }
        return p;
    }
};
int main(){
    Solution obj;
    vector<long long> p;
    int n;
    cout<<"How many rows would you like to print?:";
    cin>>n;
    if(n<1){
        cout<<"Enter a value greater than or equal to 1.";
        return 0;
    }
    for(int i=1;i<=n;i++){
        p = obj.pascal(i);
        for(auto x : p){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}