/*

Print the following pattern for the given N number of rows.
Pattern for N = 4

1
21
321
4321

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;

    while(i<=n){

        int k=i;
        int j=1;

        while(j<=i){

            cout<<k;
            j++;
            k--;
        }
        cout<<endl;
        i++;
    }

}
