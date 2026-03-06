#include <iostream>
using namespace std;
int main()
{
    int l, sp, n, i;
    char al;
    cout<<"Enter the number of lines:";
    cin>>n;
    for(l=1;l<=n;l++){
        for(sp=n-l;sp>0;sp--){    
            cout<<" ";
        }
        al = 'A';
        for(i = 1;i<=l;i++, al++){
            cout<<al;
        }
        al = 'A' + l - 2; 
        for(int t = l-1;t>0;t--, al--){
            cout<<al;
        }
        cout<<endl;
    }
    return 0;
}