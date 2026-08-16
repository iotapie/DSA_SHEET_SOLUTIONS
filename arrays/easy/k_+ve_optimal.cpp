//implementation of sliding window
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int max_len(vector<int> a, int k){
        int left = 0, right = 0, len = 0, sum = 0;//left and right respectively point to the start and end of a sub-array
        while(right<a.size()){
            sum = sum + a[right];
            //the window is shrinked from left when sum is greater than k and the left elements are removed
            while(left<=right && sum>k){
                sum = sum -a[left];
                left++;
            }
            //when target is found the length is calculated
            if(sum == k && right-left+1>len){
                len = right-left+1;
            }
            right++;
        }
        return len;
    }
};
int main() {
    Solution obj;
    vector<int> a = {10, 5, 2, 7, 1, 9};
    int k;
    cout << "Enter the value of the sum: ";
    cin >> k;
    cout << obj.max_len(a, k) << endl;
    return 0;
}