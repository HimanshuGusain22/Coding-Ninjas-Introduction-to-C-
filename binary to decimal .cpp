/*

Given a binary number as an integer N, convert it into decimal and print.

Constraints :
0 <= N <= 10^9

Sample Input 1 :
1100
Sample Output 1 :

*/

#include<iostream>
using namespace std;

int main() {

	int n, rem, tmp, dec = 0, b=1;
    cin>>n;
    tmp = n;

    while(n > 0){

        rem = n % 10;
        dec = dec + rem * b;
        b *= 2;
        n /= 10;
    }
    cout<<dec;
}
