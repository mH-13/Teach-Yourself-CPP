#include <bits/stdc++.h> //if use iostrem then #stack word would work
using namespace std;


//declare stack class for character stck
class stackk{
    //private to myclass(privater func and var)

    char stck[10]; //will hold the stck
    int pos; //position of top of the stck

public: 
//creating public members(public func and var)

    void init(); //will initialize the index/pos/stck
    void push(char ch); //push character on stck;
    char pop(); // pop character from stck;
    
};

//to define a member function, link the type name of the class with the name of the function using ::
//initializing the stck
void stackk::init(){
    pos = 0;
}

//push a character into the stck
void stackk::push(char ch){
    if(pos == 10){
        cout<<"stack is full.\n";
        return;
    }
    stck[pos] = ch;
    pos++;
}

//poping a character from the stck
char stackk::pop(){
    if(pos==0){
        cout<<"Stack if empty.\n";
        return 0; //return null on empty stack
    }
    pos--;
    return stck[pos];
}

int main(){
    stackk s1, s2; //creating two object of stackk
    //each object of a class has its own copy of every var declared within the class

    s1.init();
    s2.init(); //initialize those stackk obj

    s1.push('m');
    s1.push('y');
    s2.push('c');
    s2.push('l');
    s2.push('a');
    s2.push('s');
    s2.push('s');
    
    //stack will print those character reversewise
    //who pushed last will be poped first
    cout<<"Pop s1: \n";
    for(int i=0; i<2; i++){cout<< s1.pop()<<" ";}
    cout<<endl;
    cout<<"Pop s2: \n";
    for(int i=0; i<5; i++){cout<<s2.pop()<<" ";}
    cout<<endl;
    return 0;

}
