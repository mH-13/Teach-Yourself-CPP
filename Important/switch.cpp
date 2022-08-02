#include <bits/stdc++.h>
using namespace std;

enum DAY{SAT, SUN, MON, TUE, WED, THU, FRI};

int main(){
    enum DAY today;
    today = SAT;
    switch (today)
    {
        // will check every argument untill found it and breaks after running it
    case SAT:
        cout<<"Today is SATURDAY. It is a holiday day.\n";
        break;
    case SUN:
        cout<<"Today is SUNDAY. It is a working day.\n";
        break;
    case MON:
        cout<<"Today is MONDAY. It is a working day.\n";
        break;
    case TUE:
        cout<<"Today is TUESDAY. It is a working day.\n";
        break;

    case WED:
        cout<<"Today is WEDNESDAY. It is a working day.\n";
        break;

    case THU:
        cout<<"Today is THURSDAY. It is a working day.\n";
        break;
    case FRI:
        cout<<"Today is FRIDAY. It is a holiday.\n";
        break;    

    }

    int n;
    cin>>n;
    switch (n)
    {
    case 1:
        cout<<"one item.\n";
        break;
    case 2:
        cout<<"Two items.\n";
        break;
    default: //will work if nothing found earlier
        cout<<"Too many items.\n";
        break;
    }
    return 0;
}