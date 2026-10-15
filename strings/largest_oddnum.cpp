#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string odd_num(string a){
        int i = (int)a.size()-1;
        int end_ind = -1;
        string s;//automatically initialized to string s = "";
        while(i>=0){
//this works because the ascii code for odd numbers is odd and even for evens
//capture the first time from the right an odd number is found
            if(a[i]%2 == 1){
                end_ind = i;
                break;
            }
            i--;
        }
        for(int j = 0;j<=end_ind;j++){
//using s = s+a[j] creates a copy of the string which will result in O(N^2) time complexity
            s += a[j];
        }
        return s;
    }
};
int main(){
    Solution obj;
    string str = "5434";
    cout<<obj.odd_num(str)<<endl;
    return 0;
}