#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void zm(vector<int>& a){
        int i;
        int n = a.size();//current size of the array
        for(i=0;i<n-1;i++){
            if(a[i] == 0){
                for(int j = i;j<n-1;j++){
                    swap(a[j], a[j+1]);
                }
                //deal with consecutive zeroes
                i--;//decrement to check whether the element which swapped to the current place is zero or no
                n--;//decrement the size whenever a zero is found
            }
        }
    }
};
int main(){
    Solution obj;
    vector<int> v = {1, 0, 2, 3, 0, 0, 4, 0, 1};
    obj.zm(v);
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}