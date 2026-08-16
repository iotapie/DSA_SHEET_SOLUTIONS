
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int single(vector<int> a){
        int x = 0;
        for(int i=0;i<a.size();i++){
            x = x^a[i];// ^ is the xor operator, x^x=0 and 0^x=x
        }
        return x;
    }
};
int main(){
    Solution obj;
    vector<int> a = {2,2,33, 33, 11, 11, 6, 44, 44, 6, 18};
    int x = obj.single(a);
    cout<<"The number that occurs once is: "<<x<<endl;
    return 0;
}