#include<iostream>
using namespace std;
int main(){
    int n, l, st, sp;
    cout<<"Enter the number of lines:";
    cin>>n;
    for(l=1;l<=n;l++){
        for(sp=n-l;sp>0;sp--){
            cout<<" ";
        }
        for(st=1;st<=2*l-1;st++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}