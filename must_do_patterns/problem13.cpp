#include<iostream>
using namespace std;
int main()
{
    int l, t, i;
    cout<<"Enter the number of lines:";
    cin>>i;
    for(l=1;l<=i;l++){
        for(t=l*(l-1)/2 + 1;t<= l*(l-1)/2 + l;t++){
            cout<<t<<" ";
        }
        cout<<endl;
    }
    return 0;
}