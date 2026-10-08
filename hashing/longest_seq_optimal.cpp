//we use an unordered set which has O(1) insertion, deletion and search times but may degrade to O(N) in worst case
//space complexity is O(N) since we an additional data structure
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int long_seq(vector<int>&a){
        int n = a.size();
        //handle empty array
        if(n==0) return 0;
        unordered_set<int> st;
        int count = 1;
        //insert all the elements into the unordered set
        //duplicate elements are ignored in an unordered set
        for(int i=0;i<n;i++){
            st.insert(a[i]);
        }
        //use an iterator to loop through the unordered set
        for(auto x:st){
            //when st.find() doesn't find anything then it returns st.end()
            //we check from the smallest value of the sequence which explains the condition below
            if(st.find(x-1) == st.end()){
                int cc = 1;
                //store the iterator in p to avoid updating it
                int p = x;
                //keep on counting unless the next element is absent
                while(st.find(p+1) != st.end()){
                    p++;
                    cc++;
                }
                //find the max between the count and current count
                count = max(count, cc);
            }
        }
        return count;
    }
};
int main(){
    Solution obj;
    vector<int> a = {1, 5, 7, 4, 3, 9, 11, 10, 13, 14, 12};
    cout<<"The longest sequence is:"<<obj.long_seq(a)<<endl;
    return 0;
}