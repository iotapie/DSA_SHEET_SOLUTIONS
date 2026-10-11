//lower bound is the index at which the value is the smallest index at which
//the value is greater than equal to the target, lb = a[i]>=x
//returns size of the array when no lower bound is found
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int low_bou(vector<int>&a, int x){
        int n = a.size();
        int low = 0;
        int high = n-1;
        //initialize lower bound to the size of the array
        int lb = n;
        while(low<=high){
            int mid = (low+high)/2;
            //whenever a lower bound is found store it in the variable and check to the left
            //to see if a smaller lower bound is possible(by updating high to mid-1)
            if(a[mid]>=x){
                lb = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return lb;
    }
};
int main(){
    Solution obj;
    vector<int> a = {3, 5, 8, 15, 19};
    cout<<obj.low_bou(a, 9)<<endl;
    return 0;
}