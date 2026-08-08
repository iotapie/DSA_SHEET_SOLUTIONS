//finding missing element using linear search
//can also be done by hasing the array and finding the element that occurs once
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int ms(vector<int> a){
        int min, max, check;
        check = 0;
        max = INT_MIN;
        min = INT_MAX;
        //find the max and min elements of the array
        for(int i=0;i<a.size();i++){
            if(a[i]<min){
                min = a[i];
            }
            if(a[i]>max){
                max = a[i];
            }
        }
        for(int i=1;i<max-1;i++){//control the value of min to compare with each element
            for(int j=0;j<a.size();j++){//loop through the array to find the next element
                if(a[j] == min+i){
                    check++;
                    break;
                }
                }
                if(check == 0){//if the next element is absent then return
                    return min+i;
                }
                check = 0;
            }
            return 0;
        }
};
int main(){
    Solution obj;
    vector<int> a = {2, 4, 1, 3, 6, 5, 7, 8};
    cout<<obj.ms(a);
    cout<<endl;
    return 0;
}