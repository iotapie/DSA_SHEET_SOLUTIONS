//this approach uses prefix sum to count the number of sub-arrays
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int subarr_count(vector<int>&a, int k){
        int n = a.size();
        int count = 0;
        int sum = 0;
        //create a key and value map with sum and its frequency respectively
        unordered_map<int, int> mpp;
        //the number of sub-arrays with sum zero is 1 before starting(for an empty sub-array that is)
        mpp[0] = 1;
        for(int i = 0;i<n;i++){
            sum = sum + a[i];
            //check whether the prefix sum appears in the map
            //if it does add its frequency to count since it will be the number of times
            //a sub-array with given sum can be made
            auto x = mpp.find(sum-k);
            if(x != mpp.end()){
                count = count + mpp[sum-k];
            }
            //map the current sum
            mpp[sum]++;
        }
        return count;
    }
};
int main(){
    Solution obj;
    vector<int> a = {3, 1, 2, 4};
    cout<<"The number of sub-arrays with given sum is:"<<obj.subarr_count(a, 6)<<endl;
    return 0;
}