#include<bits/stdc++.h>//using std::reverse(arr.begin(), arr.end()) is the most effective to reverse an array.
using namespace std;
class solution{
    public:
    void reverse(int i, vector<int>& arr){
        int n = arr.size();
        int temp;
        if(i>=n/2){
            return;
        }
        temp = arr[n-i-1]; //using swap(arr[i], arr[n-i-1]) directly swaps the elements.
        arr[n-i-1] = arr[i];
        arr[i] = temp;
        reverse(i+1, arr);        
    }
};
int main(){
    solution obj;
    int size;
    cout<<"Enter the size of the array:";
    cin>>size;
    vector<int> in(size);
    cout<<"Enter the array:";
    for(int i = 0;i<size;i++){
        cin>>in[i];
    }
    obj.reverse(0, in);
    for(int val : in){
        cout<<val<<" ";
    }
    return 0;
}