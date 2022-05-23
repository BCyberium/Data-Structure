// #include <iostream>           
// using namespace std;
#include "SeqList.h"  
#include "SeqList.cpp"
int main()
{
	int r[5]={1, 2, 3, 4, 5};
	SeqList<int>L(r, 5);
	L.PrintList();
	L.len();
	try
	{
		SeqList<int>M(r, 20);	
	}
	catch(const char* s)
	{
		cout<<s<<endl;
	}
	cout<<"Before insert:"<<endl;
	L.PrintList();
	try
	{
    	L.Insert(2,3);
	}
    catch (const char *s)
    {
       	cout<<"InsertError: "<<s<<endl;
    }
    try
	{
	   	L.Insert(60,3);
	}
    catch (const char *s)
	// catch (char *s)
    {
       	cout<<"InsertError: "<<s<<endl;
    }
    cout<<"After insert: "<<endl;
   	L.PrintList();
	L.len();  
    cout<<"value is 3, location: ";
    cout<<L.Locate(3)<<endl;    
     
	cout<<"delete the first element, before delete:"<<endl;
    L.PrintList();   
	L.len();    
    try                       
    {
    	L.Delete(1);
    }
    catch (const char *s)
    {
       	cout<<"DeleteError: "<<s<<endl;
    }
    cout<<"After delete: "<<endl;
    L.PrintList();  
    L.len();
	try                       
    {
		L.Delete(9);                
    }
    catch (const char *s)
    {
       	cout<<"DeleteError: "<<s<<endl;
    }          
	return 0;
}
