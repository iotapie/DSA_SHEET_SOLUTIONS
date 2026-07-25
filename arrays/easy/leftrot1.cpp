#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void lr(vector<int>& a){
        int n = a.size();
        for(int i = 0;i<n-1;i++){
            swap(a[i], a[i+1]);
        }
    }
};
int main(){
    Solution obj;
    vector<int> v = {1, 2, 3, 4, 5, 6};
    obj.lr(v);
    for(auto x : v){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}