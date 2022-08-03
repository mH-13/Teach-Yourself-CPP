#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ios_base::sync_with_stdio(true);
    cin.tie(NULL);

    int test;
    cout<<"Enter 0-bitwise NOT, 1-leftshit, 2-rightshift\n";
    cout<<"3-bitwise AND, 4-bitwise OR, 5-bitwise X-OR:  ";
    cin>>test;


    if(test==0){
        int a,b;
        cin>>a;
        //bitwise not resutl in 2's complement
        // it basically a uniray operation which flips the bits -- ( 0--> 1 , 1--> 0)
        b = ~a; 
        cout<<"a: "<<a<<" "<<"b: "<<b<<"\n";
    }
    
    if(test ==1){
            int n,x,m;
        // 1 bit left shift to n == n*2
        cout<<"Left shift operation: "<<endl;
        while(1){
            cout<<"Enter any number (0 to exit): ";
            cin>>n; 
            if(n==0){break;}
            cout<<"How many bits you want to shift left? ";
            cin>>x;
            m = n<<x;
            cout<<"m: "<<m<<"\n";
        }
    }

    if(test == 2){
        // 1 bit right shift t0 n = n/2
        cout<<"Right shift operation: "<<endl;
        int i,j,k;
        while(1){
            cout<<"Enter any number (0 to exit): ";
            cin>>i; 
            if(i==0){break;}
            cout<<"How many bits you want to shift right? ";
            cin>>j;
            k = i>>j;
            cout<<"K: "<<k<<"\n";
        }
    }

    if(test ==3){
        int n1,n2, n3=0;
        // 1 - 1 = 1 othereise 0
        // from right bits to left
        while(1){
            cout<<"Enter two num to check bitwise AND (0,0 to exit): ";
            cin>>n1>>n2;
            if(n1==0 && n2==0){break;}
            n3 = n1 & n2;
            cout<<"Result: "<<n3<<"\n";
        }
    }


    if(test ==4){
        int n1,n2, n3=0;
        // 0 - 0 = 0 otherwise 1
        //  from right bits to left
        while(1){
            cout<<"Enter two num to check bitwise OR (0,0 to exit): ";
            cin>>n1>>n2;
            if(n1==0 && n2==0){break;}
            n3 = n1 | n2;
            cout<<"Result: "<<n3<<"\n";
        }
    }

    if(test ==5){
        int n1,n2, n3=0;
        // XOR basically return true if two bits are different
        // it returns false if two bits are same
        // it can compare two value and can swap them
        while(1){
            cout<<"Enter two num to check bitwise X-OR (0,0 to exit): ";
            cin>>n1>>n2;
            if(n1==0 && n2==0){break;}
            n3 = n1 ^ n2;
            cout<<"Result: "<<n3<<"\n";
        }
    }


    return 0;
}