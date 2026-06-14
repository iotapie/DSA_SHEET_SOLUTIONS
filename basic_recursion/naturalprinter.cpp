#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    void nprinter(int n){
        if(n==0){
            return;
        }
        nprinter(n-1);
        cout<<n<<endl;
    }
};
int main(){
    solution obj;
    int n;
    cout<<"How many natural numbers would you like to print?:";
    cin>>n;
    obj.nprinter(n);
    return 0;
}