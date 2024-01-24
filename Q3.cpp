// Print the table of ‘n’. Here ‘n’ is an integer which the user will input

#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter value of n:";
    cin>>n;
    for(i=n;i<=10*n;i=i+n){
        cout<<i<<endl;
    }
    return 0;
}