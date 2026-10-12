//upper bound is the smallest index at which the value is greater than the target
//for upper bound i and target x, a[i] > x
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int upper_bound(vector<int>&a, int x){
        int n = a.size();
        int low = 0;
        int high = n-1;
        int ub = n;
        while(low<=high){
            int mid = (low+high)/2;
            if(a[mid] > x){
                high = mid - 1;
                ub = mid;
            //even if the target is found at the mid
            //we search to the right since we want a greater element
            }else{
                low = mid+1;
            }
        }
        return ub;
    }
};
int main(){
    Solution obj;
    vector<int> a = {1, 3, 5, 7, 9};
    cout<<obj.upper_bound(a, 2)<<endl;
    return 0;
}