#include<iostream>
using namespace std;
class solution{
    public:
    int reversenum(int n){
        int lastdigit;
        int revnum = 0;
        while(n>0){
            lastdigit = n%10;
            revnum = (revnum*10) + lastdigit;
            n = n/10;
        }
        return revnum;
    }
};
int main()
{
    solution object;
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<object.reversenum(n);
    return 0;
}