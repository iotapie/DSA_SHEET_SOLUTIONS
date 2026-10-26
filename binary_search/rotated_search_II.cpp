#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool rot_search(vector<int>&a, int x){
        int n = a.size();
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(a[mid] == x){
                return true;
            }
//if the extremes and then mid are equal then it is not possible to deduce which half is sorted
//so we reduce the search space by moving low and high inwards
            if(a[mid] == a[low] && a[mid] == a[high]){
                low++;
                high--;
            }else if(a[low] <= a[mid]){
                if(x >= a[low] && x < a[mid]){
                    high = mid-1;
                }else{
                    low = mid+1;
                }
            }else{
                if(x > a[mid] && x <= a[high]){
                    low = mid+1;
                }else{
                    high = mid-1;
                }
            }
        }
        return false;
    }
};
int main(){
    Solution obj;
    vector<int> a = {7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
    cout<<obj.rot_search(a, 3)<<endl;
    return 0;
}