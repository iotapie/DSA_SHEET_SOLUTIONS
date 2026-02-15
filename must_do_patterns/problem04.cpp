#include<iostream>
using namespace std;
int main()
{
    int l, st, n;
    cout<<"Enter the number of lines:";
    cin>>n;
    for(l=n;l>=1;l--){
        for(st=l;st>0;st--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
