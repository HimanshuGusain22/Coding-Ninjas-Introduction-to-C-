/*

Nth term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -
    F(n) = F(n-1) + F(n-2),
    Where, F(1) = F(2) = 1
Provided N you have to find out the Nth Fibonacci Number.

*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int firstNum=1,secondNum=1;
    int next=0;

    if(n==1){
        cout<<firstNum;
    }
    else if(n==2){
        cout<<secondNum;
    }
    else{
        for(int i=1;i<n-1;i++){
            next=firstNum+secondNum;
            firstNum=secondNum;
            secondNum=next;
        }
        cout<<next;
    }
}
