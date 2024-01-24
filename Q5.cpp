// Display this GP - 3,12,48,.. upto ‘n’ terms.

#include<iostream>
using namespace std;
int main(){
    int i,a,n;
    cout<<"Enter value of n:";
    cin>>n;
    a=3;
    for(i=1;i<=n;i++){
        cout<<a<<endl;
        a=a*4;
    }
    return 0;
    }