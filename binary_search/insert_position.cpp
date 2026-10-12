//returns the index if target found, if not returns the index at which the target should have been
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int insert_position(vector<int>&a, int target){
        int n = a.size();
        int low = 0;
        int high = n-1;
        int insert_index = n;
        while(low<=high){
            int mid = (low+high)/2;
            if(a[mid] == target){
                return mid;
            }else if(a[mid] > target){
                insert_index = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return insert_index; //or simply low can be returned as well
    }
};
int main(){
    Solution obj;
    vector<int> a = {1, 3, 5, 6};
    cout<<obj.insert_position(a, 2)<<endl;
    return 0;
}