#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void ls(vector<int> a, int s){
        for(int i=0;i<a.size();i++){
        if(a[i] == s){
            cout<<s<<" is present at the "<<i<<"th index.";
            return;
        }
    }
    }
};
int main(){
    Solution obj;
    vector<int> a = {5, 1, 3, 13, 3, 1,5, 2,45,65, 21, 11, 2, 4};
    int s;
    cout<<"Enter the number to be seached:";
    cin>>s;
    obj.ls(a, s);
    cout<<endl;
    return 0;
}