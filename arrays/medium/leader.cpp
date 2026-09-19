//An element is a leader if all the elements to its right are <= to it
//Simplest O(n^2) approach is to compare each element to the elements on its right
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void leader(vector<int>& a){
        int n = a.size()-1;
        int check;
        for(int i=n;i>=0;i--){
            check = 0;
            for(int j=i+1;j<=n;j++){
                if(a[j]>a[i]){
                    check = -1;
                    break;
                }
            }
            if(check == 0){
                cout<<a[i]<<" ";
            }
        }
    }
};
int main(){
    Solution obj;
    vector<int> a = {10, 22, 12, 3, 0, 6};
    cout<<"The leaders are:\n";
    obj.leader(a);
    cout<<endl;
    return 0;
}