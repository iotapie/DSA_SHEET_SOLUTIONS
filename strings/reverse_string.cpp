#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void rev(string&a){
        int i = 0;
        int j = (int)a.size()-1;
        while(i<j){
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
};
int main(){
    Solution obj;
    string str = "hello";
    obj.rev(str);
    cout<<str<<endl;
    return 0;
}