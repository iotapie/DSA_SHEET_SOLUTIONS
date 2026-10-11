#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int search_index(vector<int>&a, int low, int high, int target){
        if(low>high){
            return -1;
        }
        int mid = (low+high)/2;
        if(a[mid] == target){
            return mid;
        }else if(a[mid]<target){
            return search_index(a, mid+1, high, target);
        }else{
            return search_index(a, low, mid-1, target);
        }
    }
};
int main(){
    Solution obj;
    vector<int> a = {-1, 0, 3, 5, 9, 12};
    cout<<obj.search_index(a, 0, 5, 9)<<endl;
    return 0;
}