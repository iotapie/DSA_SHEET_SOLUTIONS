//optimal O(1) approach using prefix sum approach
//the main driver is the property of xor, if A^B=C then A^C=B
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int xr_count(vector<int>&a, int k){
        int n = a.size();
        int count = 0;
        //xor of anything with zero is the number itself
        int xr = 0;
        //we xor continuously and store it against its frequency in a hash map
        unordered_map<int, int> mpp;
        for(int i=0;i<n;i++){
            xr = xr^a[i];
            if(xr == k){
                count++;
            }
//if xr^k exits that means xr^that element = k, hence add the frequency of that xor to the count
            auto it = mpp.find(xr^k);
            if(it != mpp.end()){
                count = count + mpp[xr^k];
            }
            //map each xor to its frequency
            mpp[xr]++;
        }
        return count;
    }
};
int main(){
    Solution obj;
    vector<int> a = {5, 6, 7, 8, 9};
    cout<<"The number of arrays with given xor are:"<<obj.xr_count(a, 5)<<endl;
    return 0;
}