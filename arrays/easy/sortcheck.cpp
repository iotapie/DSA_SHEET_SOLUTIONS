//time complexity is O(N)
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool sortcheck(vector<int> a){
        int check1 = 0;
        int check2 = 0;
        for(int i = 0;i<a.size()-1;i++){
            if(a[i+1]>a[i]){//if sorted in increasing order
                check1++;
            }
            if(a[i+1]<a[i]){//if sorted in decreasing order
                check2++;
            }
        }
        return check1 == a.size()-1 || check2 == a.size()-1;
    }
};
int main(){
    Solution obj;
    int in;
    vector<int> v;
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    cout<<"Enter the array:";
    for(int i = 0;i<n;i++){
        cin>>in;
        v.emplace_back(in);
    }
    if(obj.sortcheck(v)){
        cout<<"sorted";
    }else{
        cout<<"not sorted";
    }
    cout<<endl;
    return 0;
}