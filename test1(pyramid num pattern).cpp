/*

Print the following pattern for the given number of rows.
Pattern for N = 4
   1
  212
 32123
4321234

*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;
    while(i<=n){

            int k=1;
    while(k<=n-i){
        cout<< " ";
        k++;
    }
    int var=i;
        int j=1;

        while(j<=i){

            cout<<var;
            j++;
            var--;
        }
        int l =2;

    while(l<=i){

        cout<<l;
        l++;
    }
        cout<<endl;
        i++;
    }

}
