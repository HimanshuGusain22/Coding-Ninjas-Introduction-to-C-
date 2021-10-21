/*

Given a number N, figure out if it is a member of fibonacci series or not.
Return true if the number is member of fibonacci series else false.

Fibonacci Series is defined by the recurrence
    F(n) = F(n-1) + F(n-2)
where F(0) = 0 and F(1) = 1

*/
#include<iostream>
using namespace std;

bool checkMember(int n){

    int a=0,b=1,nextNum;

    while(a<n){
        nextNum=a+b;
        a=b;
        b=nextNum;
    }
    if(a==n){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;

    int ans = checkMember(n);
    cout<<ans;
}
