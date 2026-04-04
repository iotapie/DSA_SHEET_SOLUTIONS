#include <iostream>
using namespace std;
int main()
{
    int i, j, size, n;
    cout<<"Enter the number of lines:";
    cin>>n;
    size = 2*n-1;
    for(i = 0;i<2*n-1;i++){
        for(j=0;j<2*n-1;j++){
    int topdistance = i;
    int bottomdistance = size -i -1;
    int leftdistance = j;
    int rightdistance = size -j -1;
    int mindistance, md1, md2;
    if(topdistance > bottomdistance){
        md1 = bottomdistance;
    }else{
        md1 = topdistance;
    }
    if(rightdistance > leftdistance){
        md2 = leftdistance;
    }else{
        md2 = rightdistance;
    }
    if(md1>md2){
        mindistance = md2;
    }else{
        mindistance = md1;
    }
    cout<<n-mindistance;
        }
        cout<<endl;
    }
    return 0;
}