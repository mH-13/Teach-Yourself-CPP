#include <bits/stdc++.h>
using namespace std;


//  #define CONSTANT_NAME Value
#define PI (2 * acos(0))
//#define MAX 1e5
//#define MIN -1

// #define MACRO_NAME Value
#define MAX(a,b) (a>b? a:b)
#define MIN(x,y) (x<y? x:y)
#define EVEN(c,d) (c%d==0? 1:0)

// Multi-line MACRO
#define SWAP(i,j){  \
    i ^= j; \
    j ^= i; \
    i ^= j; \
}

int main(){
    //cout<<MIN<< " "<< PI<<" "<<MAX<<endl;
    int a,b,c,d,x,y;
    cout<<"Enter two number to check Max: "<<endl;
    cin>>a>>b;
    cout<<"MAX: "<<MAX(a,b)<<endl;
    cout<<"Enter two number to check Min: "<<endl;
    cin>>x>>y;
    cout<<"MIN: "<<MIN(x,y)<<endl;
    cout<<"Enter two number to check odd?even: "<<endl;
    cin>>c>>d;
    if(!EVEN(c,d)){
        cout<<"It is ODD"<<endl;
    }else{cout<<"It is EVEN"<<endl;}

    cout<<"Enter two number to Swap:"<<endl;
    int i,j;
    cin>>i>>j;
    cout<<"Before Swap: "<<i<<" "<<j<<endl;
    SWAP(i,j);
    cout<<"After Swap: "<<i<<" "<<j<<endl;

    return 0;
}
