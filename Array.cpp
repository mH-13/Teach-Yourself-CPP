/*#include <iostream>
using namespace std;

int main()
{
    int numbers[5];

    cout << "Enter 5 numbers: " << endl;

    for (int i = 0; i < 5; ++i)
    {
        cin >> numbers[i];
    }

    cout << "The numbers are: ";

    for (int n = 0; n < 5; ++n)
    {
        cout << numbers[n] << "  ";
    }

    return 0;
} 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //int s;
    int counter = 1;

    int x;
    cin >> x;

    int num[x];

    for (int i = 0; i < x; ++i)
    {
        cin >> num[i];
    }

    int n = sizeof(num) / sizeof(num[0]);
    
    for (int i = 0; i < n; ++i){

        if (i % 2 == 0)
        {
            cout << "Case #" << counter++ << ":"
             << " "
             << "Even" << endl;
        }
        else
        {
            cout << "Case #" << counter++ << ":"
             << " "
             << "Odd" << endl;
        }

    }
    

    //cout << "Line " << counter++ << ":" << s << endl;
    //}
    return 0;
}



#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s;
    int counter = 1;
    while (cin >> s)
    {
        if (s % 2 == 0)
        {
            cout << "Case #" << counter++ << ":" << " "<< "Odd" << endl;
        }
        else
        {
            cout << "Case #" << counter++ << ":" << " " << "Even" << endl;
        }

        //cout << "Line " << counter++ << ":" << s << endl;
    }
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int counter = 1;

    long long x;
    cin >> x;

    long long num[x];

    for (int i = 0; i < x; ++i)
    {
        cin >> num[i];
    }
   
   cout << num[x] << "\n";

    
    long long n = sizeof(num) / sizeof(num[0]);
    
    for (int i = 0; i < n; ++i){

        if (num[i] % 2 == 0)
        {
            cout << "Case #" << counter++ << ":" << " " << "Even" << "\n";
        }
        else
        {
            cout << "Case #" << counter++ << ":" << " " << "Odd" << "\n";
        }
    }
    return 0;
}

