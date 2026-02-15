#include<iostream>
using namespace std;
int main()
{
    int x, y;
    cout<<"Enter number of lines:";
    cin>>y;
    for(int l = 0;l<y;l++){
        for(x = 0;x<y;x++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}