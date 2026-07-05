//upon using recursion space complexity increases to O(n) from the current O(1)
//time complexity is O(n^2) generally but O(n) for an already sorted array
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void bs(vector<int>& a){
        int n = a.size();
        int i, j, check;
        for(i = 0;i<n-1;i++){
            check = 0;
            for(j=0;j<n-i-1;j++){
                if(a[j]>a[j+1]){
                    swap(a[j], a[j+1]);
                    check++;
                }
            }
            if(check == 0){//if it persists to be zero it means that no swap took place and the
                break;     //array is already sorted
            }
        }
    }
};
int main(){
    Solution obj;
    int n, in;
    cout<<"Enter the size of the array:";
    cin>>n;
    vector<int> arr;
    cout<<"Enter the array:";
    for(int i=0;i<n;i++){
        cin>>in;
        arr.emplace_back(in);
    }
    obj.bs(arr);
    for(auto x : arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}