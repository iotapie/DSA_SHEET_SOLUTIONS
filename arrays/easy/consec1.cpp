#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int max_count(vector<int> a){
        int count, ct;
        //initialize the temp counter and counter to 0
        count = 0;
        ct = 0;
        for(int i=0;i<a.size();i++){
            //if an element is equal to 1 increment the temp counter
            if(a[i] == 1){
                ct++;
            }else{//if zero is encountered initialize the temp counter to zero
                if(ct > count){//check whether the current count is greater than the previous
                    count = ct;
                }
                ct = 0;
            }
        }
        return count;
    }
};
int main(){
    Solution obj;
    vector<int> a = {0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1};
    cout<<obj.max_count(a)<<endl;
    return 0;
}