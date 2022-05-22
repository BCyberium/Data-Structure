#ifndef _TEACHERCADRE_H
#define _TEACHERCADRE_H

using namespace std;

class Teacher_Cadre: public Teacher, public Cadre
{
private:
    double wage;
public:
    Teacher_Cadre(string _name,int _age,char _sex,string _title,string _post,string _addr,string _tel,float _wage);
    void show();
};

Teacher_Cadre::Teacher_Cadre(string _name,int _age,char _sex,string _title,string _post,string _addr,string _tel,float _wage):
    Teacher(_name, _age, _sex, _title, _addr, _tel), 
    Cadre(_name, _age, _sex, _post, _addr, _tel),
    wage(_wage)
    {}

void Teacher_Cadre::show()
{
    Teacher::display();
    cout<<"post:"<<Cadre::post<<endl;
    cout<<"wages:"<<wage<<endl;
}

#endif