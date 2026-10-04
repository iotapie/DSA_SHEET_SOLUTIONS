//this approach result in a time complexity of O(NlogN) and space complexity of O(1)
//the hash map appraoch is O(N)(using unordered map) and O(N)
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool two_sum(vector<int>& a, int target){
        if (a.size() < 2){
            return false;
        }
        //sort the entire array
        sort(a.begin(), a.end());
        int i, j;
        //we use two pointer approach, place them at the beginning and ending of the array
        i = 0;
        j = a.size()-1;
        int sum;
        while(i<j){
            sum = a[i] + a[j];
            if(sum == target){
                return true;
            }
            //if sum is less than the target it means we have to increase the sum
            //to do it we move the front pointer
            //this is because the array is in sorted order
            //which means elements get larger when moving to the right
            //the opposite is true when sum is greater than targer
            if(sum<target){
                i++;
            }else{
                j--;
            }
        }
        return false;
    }
};
int main(){
    Solution obj;
    vector<int> a = {2,6,5,8,11};
    cout<<obj.two_sum(a, 14);
    return 0;
}