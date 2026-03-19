#include<iostream>
using namespace std;
int main()
{
    int n, sp, st, l;
    cout<<"Enter the number of lines:";
    cin>>n;
    for(l=1;l<=n;l++){
        if(l==1 || l==n){
            for(st=1;st<=n;st++){
                cout<<"*";
            }
        }
        else{
            cout<<"*";
            for(sp=1;sp<=n-2;sp++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}