#ifndef _TEACHER_H
#define _TEACHER_H

using namespace std;

class Teacher
{
public:
    Teacher(string _name, int _age, char _sex, string _title, string _addr, string _tel);
    void display();
protected:
    string name;
    int age;
    char sex;
    string title;
    string addr;
    string tel;
};

Teacher::Teacher(string _name, int _age, char _sex, string _title, string _addr, string _tel):
    name(_name), age(_age), sex(_sex), title(_title), addr(_addr), tel(_tel)
    {}

void Teacher::display()
{
    cout<<"name:"<<name<<endl
        <<"age:"<<age<<endl
        <<"sex:"<<sex<<endl
        <<"title:"<<title<<endl
        <<"address:"<<addr<<endl
        <<"tel:"<<tel<<endl;
}

#endif