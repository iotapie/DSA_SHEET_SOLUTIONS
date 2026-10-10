//in this approach we hash the sum and index in a map, for the sum of a sub-array to be k
//the sum upto that index - the target sum must exist prior in the map
//so its like if the current sum is x and the target sum is k then x-k must exist 
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int long_len(vector<int>&a, int k){
        int n = a.size();
        int len = 0;
        int sum = 0;
//we can use an unordered map because we have to check whether current_sum - k exists or not
        unordered_map<int, int> mpp;
        for(int i=0;i<n;i++){
            int cl = 0;
            sum = sum+a[i];
//handle those cases where the require sub-array starts from the start of the array
            if(sum == k){
                len = i+1;
            }
//we point an iterator to the sum - k element and check whether it exits or not
//to do that we can check if the iterator points anywhere or not
            auto x = mpp.find(sum-k);//this returns an iterator
            if(x != mpp.end()){
//to find current lenght subtract the current index from the index of the sum-k element
//to find the index of the sum-k element we access the value at the second part of where the iterator x points
                cl = i - x->second;
            }
//before inserting a sum we check whether it already exits in the map or not
            if(mpp.find(sum) == mpp.end()){
                mpp.insert({sum, i});
            }
            if(cl>len){
                len = cl;
            }
        }
        return len;
    }
};
int main(){
    Solution obj;
    vector<int> a = {1, -1, 5, -2, 3};
    cout<<"The length of the longest sub-array is:"<<obj.long_len(a, 3)<<endl;
    return 0;
}