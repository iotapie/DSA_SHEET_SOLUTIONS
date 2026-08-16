//1. Simple n^2 approach, take an element and loop through the array to check whether it appears again.
//2. Merge sort the array, take a for loop and make the counter i = i+2 and within it check whether a[i] != a[i+1] occurs where
//3. Hash the array and find frequecy of which element is one.
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void os(vector<int> a){
        unordered_map<int, int> mpp;
        for(int i=0;i<a.size();i++){
            mpp[a[i]]++;
        }
        for(auto x:mpp){
            if(x.second == 1){
                cout<<"The number that occurs once is:"<<x.first<<endl;
                return;
            }
        }
    }
};
int main(){
    Solution obj;
    vector<int> a = {2,2,33, 33, 11, 11, 6, 44, 44, 6, 18};
    obj.os(a);
    return 0;
}