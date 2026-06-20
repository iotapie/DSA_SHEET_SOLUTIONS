#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    bool palcheck(int i, string& str){//passing by value will cause the function to create a copy each time the function is called which will significantly slow down the program.
        if(i>=str.length()/2){
            return true;
        }
        if(str[i] != str[str.length()-i-1]){
            return false;
        }
        return palcheck(i+1, str);
    }
};
int main(){
    solution obj;
    string str;
    cout<<"Enter the string:";
    cin>>str;
    if(obj.palcheck(0, str)){
        cout<<str<<" is a palindrome.";
    }else{
        cout<<str<<" is not a palindrome.";
    }
    return 0;
}