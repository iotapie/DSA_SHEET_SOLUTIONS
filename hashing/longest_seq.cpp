//the time complexity is O(NlogN) since we need to sort
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int long_seq(vector<int>& a){
        //sort the array in ascending order
        sort(a.begin(), a.end());
        int n = a.size();
        int count = 1;
        int cc = 1;
        for(int i=1;i<n;i++){
            //if a duplicate is found just skip it
            if(a[i] == a[i-1]){
                continue;
            }                               
            //if there is a sequence then increment cc else reset it
            if(a[i] == a[i-1]+1){
                cc++;
            }else{
                cc=1;
            }
            //update the value of count with current count
            if(cc>count){
                count = cc;
            }
        }
        return count;
    }
};
int main(){
    Solution obj;
    vector<int> a = {1, 5, 7, 4, 3, 9, 11, 10, 13, 14, 12};
    cout<<"The longest sequence is:"<<obj.long_seq(a)<<endl;
    return 0;
}