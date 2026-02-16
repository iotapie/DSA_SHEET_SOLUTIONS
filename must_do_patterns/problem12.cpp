#include<iostream>
using namespace std;
int main()
{
    int l, t, n, sp;
    cout<<"Enter the number of lines:";
    cin>>n;
    for(l=1;l<=n;l++){
        for(t=1;t<=l;t++){
            cout<<t;
        }
        for(sp=2*(n-l);sp>0;sp--){
            cout<<" ";
            }
        for(t=l;t>0;t--){
            cout<<t;
        }
        cout<<endl;
    }
    return 0;
}