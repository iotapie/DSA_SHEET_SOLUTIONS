#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int fibonacci(int n){
        if(n==1 || n==2){
            return n-1;
        }else{
            return fibonacci(n-1) + fibonacci(n-2);
        }
    }
};
int main(){
    Solution obj;
    int n;
    cout<<"Which term would you like to print:";
    cin>>n;
    cout<<"The "<<n<<"th term is:"<<obj.fibonacci(n)<<endl;
    return 0;
}