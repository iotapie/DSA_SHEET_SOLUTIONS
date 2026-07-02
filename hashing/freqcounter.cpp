#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void fcounter(int arr[], int n){
        unordered_map<int, int> mpp;
        for(int i = 0;i<n;i++){
            mpp[arr[i]]++;
    }
    for(auto i:mpp){
        cout<<i.first<<"--"<<i.second<<endl;
    }
}
};
int main(){
    Solution ss;
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the array:";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    ss.fcounter(arr, n);
    return 0;
}