#include<iostream>
using namespace std;
int main()
{
    int n, l, st, sp;
    cout<<"Enter the number of lines:";
    cin>>n;
    for(l=1;l<=n;l++){
        for(st=1;st<=l;st++){
            cout<<"*";
        }
        for(sp=2*n-2*l;sp>0;sp--){
            cout<<" ";
        }
         for(st=1;st<=l;st++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(l=1;l<=n;l++){
        for(st=n-l;st>0;st--){
            cout<<"*";
        }
        for(sp=2*l;sp>0;sp--){
            cout<<" ";
        }
        for(st=n-l;st>0;st--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}