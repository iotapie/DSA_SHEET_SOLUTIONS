#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    void nname(int n, string name){
        if(n==0){
            return;
        }
        cout<<name<<endl;
        nname(n-1, name);
    }
};
int main(){
    solution obj;
    string name;
    int n;
    cout<<"Enter name and number of repetitions:";
    cin>>name>>n;
    obj.nname(n, name);
    return 0;
}