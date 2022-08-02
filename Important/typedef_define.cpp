#include <bits/stdc++.h>
using namespace std;

// define actully replace wherever it mentioned and it do not maintain scoping 
#define ip int * // int * defined as ip and can be used anywhere.


// typedef maintain the scoping rules 
typedef int * ip2;
typedef int a100[100];
typedef int (*fp) (int);
typedef long long ll;

int main(int argc, char *argv[]){ // || char **argv -- to take input from comman line

    int * a;    // an integer pointer
    ip b;       // also a pointer
    ip c, d;    // c is a pointer but d is a   normal int

    ip2 c,d;    //both c & d are pointer here
    a100 p,q;   // p, q are array of 100 integers
    fp f1, f2;  // both are pointers to functions which take 
                // one int parameter as input and return an int
    ll x,y;     // both are long long int
}


// lvalue-- has a fixed memory location and can access it (variable) 
            // also we can assign any value to this.
// rvalue -- has a  fixed value but does not have a fixed memory adress 
            //(constant/numbers/expression) -- a+2, 4, a+b, or any constanr value.
            //we cannot assign any value to this.
