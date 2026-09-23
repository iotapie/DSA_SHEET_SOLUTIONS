//simply divide the elements in two arrays to hold positive and negative numbers seperately
//then push the positive ones to even indices and the negative ones to the odd ones
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> alt_sign(vector<int>& a){
        int n = a.size();
        //take two vectors for storing positive and negative numbers
        vector<int> pos;
        vector<int> neg;
        for(int i=0;i<n;i++){
            //if element is negative push it to the negetive vector otherwise in the positive
            if(a[i]<0){
                neg.push_back(a[i]);
            }else{
                pos.push_back(a[i]);
            }
        }
        //indices to control the entries of the pos and neg vectors respectively
        int plus = 0;
        int negt = 0;
        for(int i=0;i<n;i++){
            //if index is even, push an element from pos and increment the counter
            if(i%2 == 0){
                a[i] = pos[plus];
                plus++;
            //if index is odd, push an element from the neg and increment the counter    
            }else{
                a[i] = neg[negt];
                negt++;
            }
        }
        return a;
    }
};
int main(){
    Solution obj;
    vector<int> a = {2, 4, 5, -1, -3, -4};
    a = obj.alt_sign(a);
    for(auto x:a){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}