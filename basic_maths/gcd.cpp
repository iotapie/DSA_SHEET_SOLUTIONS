#include<iostream>
using namespace std;
class solution{
    public:
    int gcd(int n1, int n2){
        int rem;
        while(n1 != 0){
            rem = n2%n1; //if n1 is greater than n2 then the values are swapped in the next step.
            n2 = n1;
            n1 = rem;
        }
        return n2; //even if n1 is zero the gcd will be n2.
    }
};
int main(){
    solution obj;
    int n1, n2;
    cout<<"Enter two numbers:";
    cin>>n1>>n2;
    cout<<obj.gcd(n1, n2);
    return 0;
}