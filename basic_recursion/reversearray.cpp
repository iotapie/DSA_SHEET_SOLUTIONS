#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    vector<int> revarr(vector<int> arr){
        int size = arr.size();
        vector<int> reverse(size);
        for(int i = 0;i<size;i++){
            reverse[i] = arr[size-i-1];
        }
        return reverse;
    }
};
int main(){
    solution obj;
    int size;
    int temp;
    vector<int> in;
    vector<int> out;
    cout<<"Enter the size of the array:";
    cin>>size;
    cout<<"Input the array:";
    for(int i = 0;i<size;i++){
        cin>>temp;
        in.emplace_back(temp); //using cin>>in[i] will cause segmentation fault since the array is not initialized, use vector<int> in(size)
    }
    out = obj.revarr(in);
    for(int val : out){
        cout<<val<<" ";
    }
    return 0;
}