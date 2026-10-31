//find the sorted part of the array and store the value at the smallest index
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int min_ele(vector<int>&a){
        int n = a.size();
        int low = 0;
        int high = n-1;
        int mini = INT_MAX;
        while(low<=high){
            int mid = low + (high-low)/2;
//if the left half is sorted then the minimum element is at the low index
//so we capture the smallest value and go to the right half to find smaller elements if they are present
            if(a[mid]>=a[low]){
                if(a[low] < mini){
                    mini = a[low];
                }
                low = mid+1;
            }
//if the right half is sorted the smallest element is at the mid index
//we capture it in mini and search the left half
            else{
                if(a[mid] < mini){
                    mini = a[mid];
                }
                high = mid-1;
            }
        }
        return mini;
    }
};
int main(){
    Solution obj;
    vector<int> a = {4, 5, 6, 7, 0, 1, 2};
    cout<<"The minimum element is:"<<obj.min_ele(a)<<endl;
    return 0;
}