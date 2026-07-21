#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int arrmax(vector<int> a){
        int max = a[0];
        for(int i = 1;i<a.size();i++){
            if(a[i]>max){
                max = a[i];
            }
        }
        return max;
    }
};
int main(){
    Solution obj;
    vector<int> v = {34, 23, 22, 1, 2, 3, 31};
    int max = obj.arrmax(v);
    cout<<"The largest element is->"<<max<<endl;
    return 0;
}