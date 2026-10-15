#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool pal_check(string& a){
        int i = 0;
        int j = (int)a.size()-1;
        while(i<j){
            if(a[i] != a[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
int main(){
    Solution obj;
    string str = "hannah";
    cout<<obj.pal_check(str)<<endl;
    return 0;
}