#ifndef _CADRE_H
#define _CADRE_H

using namespace std;

class Cadre
{
public:
    Cadre(string _name, int _age, char _sex, string _post, string _addr, string _tel);
    void display();
protected:
    string name;
    int age;
    char sex;
    string post;
    string addr;
    string tel;
};

Cadre::Cadre(string _name, int _age, char _sex, string _post, string _addr, string _tel):
    name(_name), age(_age), sex(_sex), post(_post), addr(_addr), tel(_tel)
    {}

void Cadre::display()
{
    cout<<"name:"<<name<<endl
        <<"age:"<<age<<endl
        <<"sex:"<<sex<<endl
        <<"post:"<<post<<endl
        <<"address:"<<addr<<endl
        <<"tel:"<<tel<<endl;
}

#endif