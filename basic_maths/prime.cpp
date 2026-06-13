#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    bool prime(int n){
        if(n==1){
            return false;
        }
        int i;
        for(i = 2;i*i<=n;i++){
            if(i*i==n || n%i==0){
                return false;
            }
        } 
        return true;
    }
};
int main(){
    solution object;
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(object.prime(n)){
        cout<<n<<" is a prime number.";
    }else{
        cout<<n<<" is not a prime a number.";
    }
    return 0;
}