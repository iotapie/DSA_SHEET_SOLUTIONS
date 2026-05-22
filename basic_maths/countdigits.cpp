#include <iostream>
#include <cmath>
using namespace std;
int countdigits(int n){
    int cnt = log10(n) + 1;
    if(n==0){
        return 1;
    }else{
        return cnt;
    }
}
int main()
{
    int i;
    cout<<"Enter a digit:";
    cin>>i;
    cout<<countdigits(i);
    return 0;
}
