#include<iostream>
using namespace std;
int main()
{
    int n, l, st, sp;
    cout<<"Enter the number of lines:";
    cin>>n;
    for(l=1;l<=n;l++){
        for(st=n-l+1;st>0;st--){
            cout<<"*";
        }
        for(sp=2*l-2;sp>0;sp--){
            cout<<" ";
        }
        for(st=n-l+1;st>0;st--){
            cout<<"*";
    }
    cout<<endl;
}
    for(l=1;l<=n;l++){
        for(st=l;st>0;st--){
            cout<<"*";
        }
        for(sp=10-2*l;sp>0;sp--){
            cout<<" ";
        }
        for(st=l;st>0;st--){
            cout<<"*";   
    }
    cout<<endl;
}
return 0;
}