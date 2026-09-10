#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void perm(vector<int>& a){
        int breaking_point = -1;
        int next;
        //find the first index from the end where the ascendence breaks when viewed from the right
        for(int i=a.size()-1;i>0;i--){
            if(a[i-1]<a[i]){
                breaking_point = i-1;
                break;
            }
        }
        //if no such point exists then it means the array is in ascending order when viewed from the right
        //this is the last permutation so just reverse the array
        if(breaking_point == -1){
            for(int i = 0, j = a.size()-1;i<=j;i++, j--){
                swap(a[i], a[j]);
            }
            return;
        }
        //to the right of the breaking point find the index where the value is greater than the one at bp
        //since the array will be in ascending order from the end to the bp
        //this means we are guaranteed to find the element which is just greater than the bp
        for(int i=a.size()-1;i>breaking_point;i--){
            if(a[i]>a[breaking_point]){
                next = i;
                break;
            }
        }
        //swap bp and next and reverse the array to the right of the bp
        swap(a[breaking_point], a[next]);
        for(int i=breaking_point+1, j=a.size()-1;i<=j;i++, j--){
            swap(a[i], a[j]);
        }
    }
};
int main(){
    Solution obj;
    vector<int> a = {3, 1, 4, 2};
    obj.perm(a);
    for(auto x:a){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}