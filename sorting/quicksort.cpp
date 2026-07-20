#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void qs(vector<int>& a, int low, int high){
        if(low>=high){
            return;
        }
        int i = low;
        int j = high;
        int pivot = a[low];
        while(i<j){
            while(i<high && a[i]<=pivot){
                i++;
            }
            while(j>low && a[j]>=pivot){
                j--;
            }
            if(i<j){
                swap(a[i], a[j]);
            }
        }
        int pivotindex = j;
        swap(a[low], a[pivotindex]);
        qs(a, low, pivotindex - 1);
        qs(a, pivotindex+1, high);
    }
};
int main(){
    Solution obj;
    vector<int> v = {5, 4, 3, 2, 1};
    obj.qs(v, 0, 4);
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}