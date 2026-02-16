#include<iostream>
using namespace std;
int main()
{
    int n, sp, l, st;
    cout<<"Enter the number of lines";
    cin>>n;
    for(l = n;l>=1;l--){
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
