#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void fcounter(int arr[], int n){
        map<int, int> mpp;
        for(int i = 0;i<n;i++){
            mpp[arr[i]]++;
    }
    int min, max, maxk, mink;
    max = 1;
    min = max;
    maxk = mpp.begin()->first;
    mink = maxk;
    for(auto i:mpp){
        if(i.second>max){
            max = i.second;
            maxk = i.first;
        }
        if(i.second<=min){
            min = i.second;
            mink = i.first;
        }
    }
    cout<<"Highest frequency:"<<maxk<<"--"<<max<<endl;
    cout<<"Lowest frequency:"<<mink<<"--"<<min<<endl;
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