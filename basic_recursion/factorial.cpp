#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    int factorial(int n){
        int fac;
        if(n==0){
            return 1;
        }
        fac = n*factorial(n-1);
        return fac;
    }
};
int main(){
    solution obj;
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<obj.factorial(n)<<endl;
    return 0;
}