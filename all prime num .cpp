/*

Given an integer N, print all the prime numbers that lie in the range 2 to N (both inclusive).
Print the prime numbers in different lines.

*/

#include <iostream>
using namespace std;
int main(){

	 int n;
	 cin>>n;
	 int i,j;
	 int num=2;

    cout<<num<<endl;

	for(i = 2;i <= n;i++){
		for( j = 2; j <=( i/2); j++){

              if(i%j==0){

                j=i;
				break;
			}
		}
			if(j != i){
				cout<<i<<endl;
			}
	}
}
