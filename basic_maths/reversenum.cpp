#include<iostream>
#include<cmath>
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
    int n, nd, sumd, i, m;
    int exd, p1, p2, p3;
    cout<<"Enter a number:";
    cin>>n;
    nd = countdigits(n);
    i = 1;
    m = 0;
    sumd = 0;
    for(i = 1, m =0, sumd = 0;i<=n;i++, m++){
        p1 = pow(10, i);
        p2 = pow(10, m);
        p3 = pow(10, nd-i);
        exd = ((n%p1)/p2)*p3;
        sumd = sumd + exd; 
    }
    cout<<sumd;
    return 0;
}