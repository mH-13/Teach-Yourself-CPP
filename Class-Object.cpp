#include <iostream>
#include <string>

using namespace std;

class MehedisClass
{
public:
    void reallyDude()
    {
        cout << "Waters flavour is its temperature." << endl;
        cout << "We are going to learn different use of cls & obj." << endl;
    }
};

class NewClass /* Always use variable in private class */
{
public:
    void setName(string x)
    {
        name = x;
    }
    string getName()
    {
        return name;
    }

private:
    string name; /* declaring variable */
};

/* Constructors */
class constructor
{
private:
    string institute;

public:
    constructor(string a) /* constructor is define as the same name as the class */
    {
        setName(a);
    }

    void setName(string x)
    {
        institute = x;
    }

    string getName()
    {
        return institute;
    }
};

int main()
{
    MehedisClass mehedisobject;
    mehedisobject.reallyDude();

    NewClass Newobj; /* Creating obj */
    Newobj.setName("Labush");
    NewClass Newobj2;
    Newobj2.setName("Nill");
    cout << "--------------" << endl;
    cout << Newobj.getName() << endl;
    cout << Newobj2.getName() << endl;

    cout << "--------------" << endl;
    constructor obj("BRAC University");
    cout << obj.getName() << endl;
    constructor obj2("Rangpur GOVT. College");
    cout << obj2.getName() << endl;
    constructor obj3("Gaibandha Govt. Boys High School");
    cout << obj3.getName() << endl;
    return 0;
}
