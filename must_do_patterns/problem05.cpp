#include<iostream>
using namespace std;
int main()
{
    int l, num, n;
    cout<<"Enter the number of lines:";
    cin>>n;
    for(l=1;l<=n;l++){
        num = l;
        for(int i = 1;i<=l;i++){
            cout<<l;
        }
        cout<<endl;
    }
    return 0;
}
