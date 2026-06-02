#include<iostream>
using namespace std;
class solution{
    public:
    bool palindrome(int n){
        int revnum = 0;
        int lastdigit;
        int dupn = n;
        while(n>0){
            lastdigit = n%10;
            revnum = revnum*10 + lastdigit;
            n = n/10; //shave of the last digit;
        }
        if(dupn == revnum){
            return true;
        }else{
            return false;
        }
    }
};
int main(){
    solution obj;
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(obj.palindrome(n)){
        cout<<"The number is palindrome.";
    }else{
        cout<<"The number is not palindrome.";
    }
    return 0;
}