#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool sumcheck(vector<int>& a, int target){
        unordered_map<int, int> mpp;
        int complement;
        for(int i=0;i<a.size();i++){
            //select an element and find its complement
            complement = target-a[i];
            //if the complement is present then return true
            if(mpp[complement]>0){//or use mpp.find(complement) != mpp.end()
                return true;
            }
            //if absent add it to the map for subsequent checking
            mpp[a[i]]++;
        }
        return false;        
    }
};
int main(){
    Solution obj;
    int t;
    cout<<"Enter the target:";
    cin>>t;
    vector<int> a = {2,6,5,8,11};
    cout<<obj.sumcheck(a, t);
    return 0;
}