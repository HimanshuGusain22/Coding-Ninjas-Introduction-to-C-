/*

Print the following pattern

Pattern for N = 4

1
23
345
4567

*/
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<< " enter the value of n "<<endl;
    cin>>n;

    int i=1;

    while(i<=n){
        int val=i;
        int j=1;

        while(j<=i){
            cout<< val;
            j=j+1;
            val=val+1;
        }
        cout<<endl;
        i=i+1;
    }
}
