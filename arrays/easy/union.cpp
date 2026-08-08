//two pointer approach to find the union of two sorted arrays
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> merge(vector<int> a, vector<int> b){
        vector<int> m;
        int i, j;//initialize two pointers at the start of each array
        for(i=0, j=0;i<a.size() && j<b.size();){
            if(a[i]<b[j]){//compare elements one by one
                m.emplace_back(a[i]);
                i++;
            }else{
                m.emplace_back(b[j]);
                j++;
            }
        }
        //put the remaining elements in place
        while(i<a.size()){
            m.emplace_back(a[i]);
            i++;
        }
        while(j<b.size()){
            m.emplace_back(b[j]);
            j++;
        }
        return m;
    }
};
int main(){
    Solution obj;
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {13, 14, 15, 16, 17, 18};
    vector<int> c;
    c = obj.merge(a, b);
    for(auto x:c){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}