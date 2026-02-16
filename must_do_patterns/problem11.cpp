#include<iostream>
using namespace std;
int main()
{
    int l, t, b, n;
    cout<<"Enter the number of lines:";
    cin>>n;
    for(l=1;l<=n;l++){
        if(l%2!=0){
            b = 1;
        }else{
            b = 0;
        }
        for(t=1;t<=l;t++){
            cout<<b<<" ";
            if(b==0){
                b=1;
            }else{;
                b=0;
            }
        }
        cout<<endl;
    }
    return 0;
}