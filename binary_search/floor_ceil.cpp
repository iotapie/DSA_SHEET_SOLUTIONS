//just keep in mind that mid is the searched index in binary search
//floor is the largest element less than or equal to a given target x, floor<=x
//ceil is the smallest element greater than or equal to a given target x, ceil>=x
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int floor(vector<int>&a, int x){
        int n = a.size();
        int low = 0;
        int high = n-1;
        int flr = -1;
        while(low<=high){
            int mid = (low+high)/2;
            //we update flr each time the condition for floor is met
            if(a[mid]<=x){
                flr = a[mid];
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return flr;
    }
    int ceil(vector<int>&a, int x){
        int n = a.size();
        int low = 0;
        int high = n-1;
        int cl = -1;
        while(low<=high){
            int mid = (low+high)/2;
            //update cl each time the condition for ceil is met
            if(a[mid]>=x){
                cl = a[mid];
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return cl;
    }
};
int main(){
    Solution obj;
    vector<int> a = {3, 4, 4, 7, 8, 10};
    cout<<"Floor:"<<obj.floor(a, 5)<<"\nCeil:"<<obj.ceil(a, 5)<<endl;
    return 0;
}