#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void is(vector<int>& a){
        int n = a.size();
        int i, j;
        for(i=0;i<n-1;i++){
            for(j=i;j>=0;j--){
                if(a[j]>a[j+1]){
                    swap(a[j], a[j+1]);
                }else{
                    break;
                }
            }
        }
    }
};
int main(){
    Solution obj;
    vector<int> arr = {5, 4, 3, 2, 1};
    obj.is(arr);
    for(auto x : arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}