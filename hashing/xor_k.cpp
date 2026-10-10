//O(N^2) approach to traverse each sub-array and find its xor
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int subarr_count(vector<int>&a, int k){
        int n = a.size();
        //variable to store the xor
        int x = 0;
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                x = x^a[j];
                if(x == k){
                    count++;
                }
            }
            //reset the xor variable each time when a sub-array with different start starts
            x = 0;
        }
        return count;
    }
};
int main(){
    Solution obj;
    vector<int> a = {5, 6, 7, 8, 9};
    cout<<"The number of sub-arrays with given XOR is:"<<obj.subarr_count(a, 5)<<endl;
    return 0;
}