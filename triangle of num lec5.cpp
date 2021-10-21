/*

Print the following pattern for the given number of rows.
Pattern for N = 4

   1
  232
 34543
4567654

The dots represent spaces.

*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;

    while(i<=n){

            int k=1;
          // k --> spaces
            while(k<=n-i){
                cout<< " ";
                k++;
            }

        int val=i;
        int j=1;

        while(j<=i){
            cout<<val;
            j++;
            val++;
        }
         j=i-1;
         val=(2*i)-2;

        while(j>=1){
            cout<< val;
            val--;
            j--;
        }
        cout<<endl;
        i++;
    }
}
