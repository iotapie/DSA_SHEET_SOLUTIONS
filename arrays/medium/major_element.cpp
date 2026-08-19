//array is guaranteed to have a majority element
//majority element is the one that occurs more than n/2 times, n->size of array
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int major_el(vector<int>& a){//passing by ref won't make a diff. here since function is called once but it is standard practice
        //hash the array
        unordered_map<int, int> mpp;
        for(int i = 0;i<a.size();i++){
            mpp[a[i]]++;
        }
        //find the majority element(first stores the element itself and second its frequency)
        for(auto x:mpp){
            if(x.second>a.size()/2){
                return x.first;
            }
        }
        //just standard practice to have this here cause compilers might give a warning
        return -1;
    }
};
int main(){
    Solution obj;
    vector<int> a = {1, 1, 1, 2, 1, 2};
    cout<<obj.major_el(a)<<endl;
    return 0;
}