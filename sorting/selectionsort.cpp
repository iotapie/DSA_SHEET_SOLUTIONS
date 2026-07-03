//using recursion leads to O(n) space complexity which may cause stack overflow for larger input
//on the other hand iteration will have O(n) time complexity
//time complexity is O(n^2) in both cases
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void ss(int a[], int n, int f){
        if(f==n-1){
            cout<<a[n-1];
            return;
        }
        int temp;
        int min = a[f];
        int minindex = f;
        for(int i = f+1;i<n;i++){
            if(a[i]<min){
                min = a[i];
                minindex = i;
            }
        }
        temp = a[f];
        a[f] = min;
        a[minindex] = temp;
        cout<<a[f]<<" ";
        ss(a, n, f+1); 
    }
};
int main(){
    Solution object;
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the array:";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    object.ss(arr, n, 0);
    cout<<endl;
    return 0;
}