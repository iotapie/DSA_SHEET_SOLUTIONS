#include<iostream>
using namespace std;
int main()
{
    int l, num, n;
    cout<<"Enter the number of lines:";
    cin>>n;
    for(l=n;l>=1;l--){
        for(num=1;num<=l;num++){
            cout<<num;
        }
        cout<<endl;
    }
    return 0;
}