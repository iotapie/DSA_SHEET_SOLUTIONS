#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void merge(vector<int>& a, int low, int mid, int high){
        vector<int> temp;
        int start1 = low;
        int start2 = mid+1;
        int i, j;
        for(;start1<=mid && start2<=high;){
            if(a[start1]<a[start2]){
                temp.emplace_back(a[start1]);
                start1++;
            }else{
                temp.emplace_back(a[start2]);
                start2++;
            }
        }
        while(start1<=mid){
            temp.emplace_back(a[start1]);
            start1++;
        }
        while(start2<=high){
            temp.emplace_back(a[start2]);
            start2++;            
        }
        for(int i = 0;i<temp.size();i++){
            a[i+low] = temp[i];
        }
    }
    void merge_sort(vector<int>& a, int low, int high){
        if(low == high){
            return;
        }
        int mid = (low+high)/2;
        merge_sort(a, low, mid);
        merge_sort(a, mid+1, high);
        merge(a, low, mid, high);
    }
};
int main(){
    Solution obj;
    vector<int> v = {16, 18, 12, 13, 1, 9, 9, 0, 4, 12};
    int high = v.size();
    obj.merge_sort(v, 0, high);
    for(auto x: v){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}