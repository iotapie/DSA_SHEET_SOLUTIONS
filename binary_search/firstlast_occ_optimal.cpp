//the best way to find the first and last occurence of an element is to utilise binary search and find upper and lower bounds
//the lower bound will always point to the target which is at the smallest index if present
//the upper bound will always point to the element next to the target
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    //helper function to find lower bound
    int lower_bound(vector<int>&a, int x){
        int n = a.size();
        int low = 0;
        int high = n-1;
        int lb = n;
        while(low<=high){
            int mid = (low+high)/2;
            if(a[mid]>=x){
                lb = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return lb;
    }
    //helper function to find upper bound
    int upper_bound(vector<int>&a, int x){
        int n = a.size();
        int low = 0;
        int high = n-1;
        int ub = n;
        while(low<=high){
            int mid = (low+high)/2;
            if(a[mid]>x){
                ub = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ub;
    }
    //find the first and last occurences using upper and lower bounds
    pair<int, int> firslast_occ(vector<int>&a, int x){
        pair<int, int> p(-1, -1);
        int n = a.size();
        if(n==0){
            return p;
        }
        int lb = lower_bound(a, x);
        //if the lower bound is absent or not equal to the target, just return p as it is
        if(lb == n || a[lb] != x){
            return p;
        }
        //if the lower bound is present then the upper bound will exist for sure
        int ub = upper_bound(a, x);
        p.first = lb;
        p.second = ub-1;
        return p;
    }
};
int main(){
    Solution obj;
    vector<int> a = {5, 7, 7, 8, 8, 10};
    pair<int, int> p = obj.firslast_occ(a, 8);
    cout<<p.first<<", "<<p.second<<endl;
    return 0;
}