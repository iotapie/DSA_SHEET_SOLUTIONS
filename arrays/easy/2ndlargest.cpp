#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int arr2max(vector<int> a){
        int max, max2;
        max = INT_MIN;//stores smallest possible integer value, similarly INT_MAX stores largest possible
        max2 = INT_MIN;
        for(int i = 0;i<a.size();i++){
            if(a[i]>max){
                max2 = max;
                max = a[i];
            }else if(a[i]>max2 && a[i]<max){
                max2 = a[i];
            }
        }
        return max2;
    }
};
int main(){
    Solution obj;
    vector<int> v = {3, 2, 22, 11, 3, 5};
    int max2 = obj.arr2max(v);
    cout<<"The second largest element is->"<<max2<<endl;
    return 0;
}