#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void dup_rem(vector<int>& a){
        int n = a.size();//current size of the array
        for(int i = 0;i<n-1;i++){
            if(a[i] == a[i+1]){
                for(int j=i+1;j<n-1;j++){
                    swap(a[j], a[j+1]);
                }
                n--;//decrease the size of the array each time a duplicate is found
                i--;//decrease the index to check if there are more duplicates of the current element
            }
        }
        for(int k=0;k<n;k++){
            cout<<a[k]<<" ";
        }
    }
};
int main(){
    Solution obj;
    vector<int> a = {1, 1, 2, 2, 3, 3, 3, 4};
    obj.dup_rem(a);
    cout<<endl;
    return 0;
}