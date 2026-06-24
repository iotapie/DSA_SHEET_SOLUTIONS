#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    void fibo(int fib1, int fib2, int n, int i){
        if(i==n+1){
            return;
        }
        if(i==1 || i==2){
            cout<<i-1<<" ";
        }else{
            int temp;
            temp = fib2;
            fib2 = fib2 + fib1;
            fib1 = temp;
            cout<<fib2<<" ";
        }
        fibo(fib1, fib2, n, i+1);
}
};
int main(){
    solution obj;
    int n;
    cout<<"How many terms would you like to print?:";
    cin>>n;
    obj.fibo(0, 1, n, 1);
    cout<<endl;
    return 0;
}