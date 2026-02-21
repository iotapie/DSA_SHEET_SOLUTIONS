#include<iostream>
using namespace std;
int main()
{
    int l, inl;
    char al;
    cout<<"Enter the number of lines:";
    cin>>inl;
    for(l=1;l<=inl;l++){
        for(al='A';al<'A'+inl-l+1;al++){
            cout<<al;
        }
        cout<<endl;
    }
    return 0;
}