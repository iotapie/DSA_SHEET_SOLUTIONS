#include<bits/stdc++.h>
using namespace std;
class answer{
    public:
    vector<int> divisor(int n){
        int div, rem;
        vector<int> divi;
        for(int i = 1;i*i<=n;i++){
            rem = n%i;
            if(rem == 0){
                divi.emplace_back(i);
                div = n/i;
                if(div != i){
                    divi.emplace_back(div);
                }
            }
        }
        return divi;
    }
};
int main(){
    answer obj;
    int n;
    cout<<"Enter a number:";
    cin>>n;
    vector<int> div = obj.divisor(n);
    cout<<"The divisors of "<<n<<" are:"<<endl;
    for(int val : div){ //use auto val : div to let the compiler deduce the value type
        cout<<val<<endl;
    }   
    return 0;
}