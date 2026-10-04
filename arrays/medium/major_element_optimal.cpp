//the array is guaranteed to have a majority element
//majority element is the element which occurs more than n/2 times
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int major_el(vector<int>& a){
        int n = a.size();
        int element;
        int count = 0;
        //loop through the array
        for(int i=0;i<n;i++){
        //we update the element to the current element each time the count becomes zero
            if(count == 0){
                element = a[i];
            }
            //if the succeeding term is element we increment the count
            //else we decrement it
            if(a[i] == element){
                count++;
            }else{
                count--;
            }
        }
        //the last value stored in element is the majority element
        return element;
    }
};
int main(){
    Solution obj;
    vector<int> a = {1, 1, 1, 2, 1, 2};
    cout<<"The majority element is:"<<obj.major_el(a)<<endl;
    return 0;
}