#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void lr(vector<int>& a, int k){
        int n = a.size();
        //reverse the entire array
        for(int i=0, j=n-1;i<j;i++, j--){
            swap(a[i], a[j]);
        }
        //reverse the first n-k elements
        for(int i = 0, j=n-k-1;i<j;i++, j--){
            swap(a[i], a[j]);
        }
        //reverse the remaining k elements
        for(int i=n-k, j=n-1;i<j;i++, j--){
            swap(a[i], a[j]);
        }
    }
};
int main(){
    Solution obj;
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    int k;
    cout<<"By how many places would you like to rotate?:";
    cin>>k;
    obj.lr(v, k);
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
//for right rotate
//reverse the entire array
//reverse first k elements
//reverse the remaining n-k elements