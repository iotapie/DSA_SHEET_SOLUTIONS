#include <iostream>
using namespace std;
int main()
{
    int l, n;
    char al;
    cout<<"Enter the number of lines:";
    cin>>n;
    for(l=1;l<=n;l++){
        al = 'A' + n-l;
        for(int i = 1;i<=l;i++, al++){
            cout<<al;
        }
        cout<<endl;
    }
    return 0;
}