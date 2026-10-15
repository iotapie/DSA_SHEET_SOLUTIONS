#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string odd_num(string a){
        int i = (int)a.size()-1;
        int end_ind = -1;   
        while(i>=0){
//this works because the ascii code for odd numbers is odd and even for evens
//capture the first time from the right an odd number is found
            if(a[i]%2 == 1){
                //return a substring starting from the index zero and of length i+1
                return a.substr(0, i+1);
            }
            i--;
        }
        //return an empty string if no odd number is found
        return "";
    }
};
int main(){
    Solution obj;
    string str = "5434";
    cout<<obj.odd_num(str)<<endl;
    return 0;
}