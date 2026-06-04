#include<iostream>
#include<cmath>
using namespace std;
class solution{
    public:
    int countdigits(int n){  //int k = to_string(n).length(); can be used as well to store the length in a variable k.
        int digits;
        if(n == 0){
            return 1;
        }else{
        digits = log10(n)+1;
        return digits;
        }
    }
    bool armstrong(int number, int n){
        int digit;
        int power = 0;
        int dumn = number;
        for(int i=1;i<=n;i++){
            digit = dumn%10;
            power = power + pow(digit, n);
            dumn = dumn/10;
        }
        return power == number;  //instead of using an if else block using this will return true if the condition is satisfied.
    }
};
int main(){
    solution obj;
    int num, digitcount;
    cout<<"Enter a number:";
    cin>>num;
    digitcount = obj.countdigits(num);
    if(obj.armstrong(num, digitcount)){
        cout<<num<<" is an armstrong number.";
    }else{
        cout<<num<<" is not an armstrong number.";
    }
    return 0;    
}