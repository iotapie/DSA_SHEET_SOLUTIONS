//to find the common prefix in an array of strings
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string common_prefix(vector<string>&a){
        if(a.size() == 0){
            return "";
        }
        string pref;
//loop through the first string in the array and match its characters to every other string in the array
        for(int i = 0;i<a[0].length();i++){
            for(int j=1;j<a.size();j++){
//if the index of the accessed character exceeds then length of the string
//or if the character doesn't match the character of the first string
//then return the current stored prefix                
                if(a[j].length()<i || a[j][i] != a[0][i]){
                    return pref;
                }
            }
//if the character is matched in all strings then add it to the prefix string 
            pref += a[0][i];
        }
        return pref;
    }
};
int main(){
    Solution obj;
    vector<string> a = {"flower", "flow", "fly", "flight"};
    cout<<obj.common_prefix(a)<<endl;
    return 0;
}