#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    int nsum(int n){
        int sum;
        if(n==1){
            return 1;
        }
        sum = n +nsum(n-1);
        return sum;
    }
};
int main(){
    solution obj;
    int n;
    cout<<"How many natural numbers would you like to sum?:";
    cin>>n;
    cout<<obj.nsum(n);
    return 0;
}