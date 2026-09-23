//simple O(N) approach to find a leader
//instead of comparing an element to every other to its right, just compare it to the greatest one
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void leader(vector<int>& a){
        int n = a.size()-1;
        //store the current max in a variable
        int max = a[n];
        for(int i=n;i>=0;i--){
            //if the current element is >= than the greatest to the right, then it is a leader
            if(a[i]>=max){
                cout<<a[i]<<" ";
                //update the value of max to the current element
                max = a[i];
            }
        }
    }
};
int main(){
    Solution obj;
    vector<int> a = {10, 22, 12, 3, 0, 6};
    cout<<"The leaders are:\n";
    obj.leader(a);
    return 0;
}