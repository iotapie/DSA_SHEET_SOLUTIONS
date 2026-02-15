#include<iostream>
using namespace std;
int main()
{
    int l, st, sp, n;
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
    for(l=n;l>0;l--){
        for(sp=0;sp<n-l;sp++){
            cout<<" ";
        }
        for(st=2*l-1;st>0;st--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}