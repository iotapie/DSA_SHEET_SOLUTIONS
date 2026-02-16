#include<iostream>
using namespace std;
int main()
{
    int l, n, num;
    cout<<"Enter the number of lines:";
    cin>>n;
    for(l=1;l<=n;l++){
        for(num=1;num<=l;num++){
            cout<<num;
        }
        cout<<endl;
    }
    return 0;
}
