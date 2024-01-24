// Display this AP - 4,7,10,13,16.. upto ‘n’ terms.

#include<iostream>
using namespace std;
int main(){
    int i,a,n;
    cout<<"Enter value of n:";
    cin>>n;
    a=4;
    for(i=1;i<=n;i++){
        cout<<a<<endl;
        a=a+3;
    }
    return 0;
    }