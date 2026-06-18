#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    bool palcheck(int i, string str, string revr){// upon declaring revr inside the function a local varialbe will be formed which will be reinitialized each time the function is called again.
        int n = str.size();
        if(i>=n){// using i>n cause segmentation fault error since at n str[-1] is undefined;
            return revr == str; 
        }
        revr = revr + str[n-i-1];// or use revr.emplace_back(str[n-i-1])
        return palcheck(i+1, str, revr);
    }
};
int main(){
    solution obj;
    string str;
    cout<<"Enter the string:";
    cin>>str;
    if(obj.palcheck(0, str, "")){
        cout<<str<<" is a palindrome.";
    }else{
        cout<<str<<" is not a palindrome.";
    }
    return 0;
}