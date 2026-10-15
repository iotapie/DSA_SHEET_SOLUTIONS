//to check the first and last occurence of an element using 2 pointer approach
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    pair<int, int> firstlast_occ(vector<int>&a, int x){
        int n = a.size();
        int i = 0;
        int j = n-1;
        pair<int, int> p(-1, -1);
        //make sure to put the brackets for the second two conditions
        //this is because the && operator has higher precedence than ||
        //without parenthesis this will cause the expression to evaluate as:
        //(i<=j && p.first == -1) || p.second = -1, which may cause errors
        while(i<=j && (p.first == -1 || p.second == -1)){
            if(a[i] == x && p.first == -1){
                p.first = i;
            }
            if(a[j] == x && p.second == -1){
                p.second = j;
            }
            if(p.first == -1){
                i++;
            }
            if(p.second == -1){
                j--;
            }
        }
        return p;
    }
};
int main(){
    Solution obj;
    vector<int> a = {5, 7, 7, 8, 8, 10};
    pair<int, int> p;
    p = obj.firstlast_occ(a, 5);
    cout<<p.first<<", "<<p.second<<endl;
    return 0;
}