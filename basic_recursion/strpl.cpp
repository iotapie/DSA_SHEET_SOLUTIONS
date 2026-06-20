#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    bool palcheck(string str){
        for(int i = 0;i<str.length()/2;i++){
            if(str[i] != str[str.length()-i-1]){
                return false;
            }
        }
        return true;
    }
};
int main(){
    solution obj;
    string str;
    cout<<"Enter the string:";
    cin>>str;
    if(obj.palcheck(str)){
        cout<<str<<" is a palindrome.";
    }else{
        cout<<str<<" is not a palindrome.";
    }
    return 0;
}