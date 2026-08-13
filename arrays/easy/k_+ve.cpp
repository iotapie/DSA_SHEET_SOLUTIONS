//to find the length of the longest sub array with given sum k
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void pk(vector<int> a, int k){
        int begin, end, sum, length, lt;
        sum = 0;
        length = 0;
        lt = 0;
        for(begin = 0;begin<a.size();begin++){//control the beginning of the sub array
            for(end = a.size()-1;end>=begin;end--){//control the ending of the sub array
                for(int i = begin;i<=end;i++){//once the sub array is selcted, sum the elements in it
                    sum = sum+a[i];
                    lt++;
                }
                if(lt>length && sum == k){//verify the sum with the given value
                    length = lt;
                }
                lt = 0;
                sum = 0;
                }
            }
            if(length>0){
                cout<<"The length of the longest sub-array is:"<<length;
                return;
            }else{
                cout<<"0";
                return;
            }
        }
};
int main(){
    Solution obj;
    vector<int> a = {9, -3, 3, -1, 6, -5};
    int k;
    cout<<"Enter the value of the sum:";
    cin>>k;
    obj.pk(a, k);
    cout<<endl;
    return 0;
}