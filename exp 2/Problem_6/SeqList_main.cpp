#include <iostream>           
using namespace std;
#include "SeqList.h"  
#include "SeqList.cpp"         
int main()
{
    int r[5]={1, 2, 3, 4, 5};	
	SeqList<int>L(r, 5);
	L.PrintList();              
	L.Reverse();
	L.PrintList();
	double s[6] = {1.2, 2.3, 3.4, 4.5, 5.6, 6.7};
	SeqList<double>W(s, 6);
	W.PrintList();
	W.Reverse();
	W.PrintList();
  	return 0;
}
