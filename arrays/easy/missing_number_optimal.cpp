//can be done using hashing as well which has O(N) TC but the SC is O(N) compared to the O(1) here
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int mis_num(vector<int> a){
        int x, sum, given_sum, max;
        given_sum = 0;
        max = 0;
        for(int i = 0;i<a.size();i++){
            if(a[i]>max){
                max = a[i];
            }
            given_sum = given_sum + a[i];
        }
        sum = max*(max+1)/2;
        if(given_sum == sum){
            return 0;
        }
        return sum - given_sum;
    }
};
int main(){
    Solution obj;
    vector<int> a = {2, 4, 1, 6, 5, 7, 8};
    int x = obj.mis_num(a);
    cout<<x<<endl;
    return 0;
}