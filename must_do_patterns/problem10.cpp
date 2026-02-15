#include<iostream>
using namespace std;
int main()
{
    int l, st, n;
    cout<<"Enter the number of lines:";
    cin>>n;
    for(l=1;l<=n;l++){
        for(st=1;st<=l;st++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(l=n-1;l>0;l--){
        for(st=l;st>0;st--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}