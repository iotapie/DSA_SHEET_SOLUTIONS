#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int search_index(vector<int>&a, int target){
        //take pointes keep one at the start and one at the end of the array
        int low = 0;
        int high = a.size()-1;
        while(low<=high){
            //find the middle index
            //if its present return it
            //if not check whether the value at mid is < or > than the target value
            //if it is less than then check on the left of the mid
            //if it is greater than then check on the right of the mid
            int mid = (low+high)/2;    //use int mid = low + (high - low) / 2; or long long for larger values
            if(a[mid] == target){
                return mid;
            }else if(a[mid]<target){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return -1;
    }
};
int main(){
    Solution obj;
    vector<int> a = {-1, 0, 3, 5, 9, 12};
    cout<<obj.search_index(a, 9)<<endl;
    return 0;
}