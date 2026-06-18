#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    bool palcheck(string str){
        int n = str.size();
        string rstr;
        for(int i = 0;i<n;i++){
            rstr = rstr + str[n-i-1];
        }
        return rstr == str;
    }
};
int main(){
    solution obj;
    string str;
    cout<<"Enter a string:";
    cin>>str;
    if(obj.palcheck(str)){
        cout<<str<<" is a palindrome.";
    }else{
        cout<<str<<" is not a palindrome";
    }
    return 0;
}