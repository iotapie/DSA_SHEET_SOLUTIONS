#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int rot_search(vector<int>&a, int x){
        int n = a.size();
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(a[mid] == x){
                return mid;
            }
//check if the left half is sorted
            if(a[low] <= a[mid]){
//if the left is sorted then check whether the target is within the range of the left half or not
//we don't check equality on a[mid] since it has already been handled above
//if within the range then it is bound to be on the left
                if(x >= a[low] && x < a[mid]){
                    high = mid-1;
//if not it will be on the right
                }else{
                    low = mid+1;
                }
                //similarly,
//check if the right half is sorted
            }else{
//if it is then check then check the range accordingly
                if(x > a[mid] && x <= a[high]){
                    low = mid+1;
                }else{
                    high = mid-1;
                }
            }
        }
        return -1;
    }
};
int main(){
    Solution obj;
    vector<int> a = {4, 5, 6, 7, 0, 1, 2};
    cout<<obj.rot_search(a, 0)<<endl;
    return 0;
}