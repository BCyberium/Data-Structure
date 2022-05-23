#include <iostream>         
using namespace std;
#include "SeqList.h"

template <typename T>
SeqList<T>::SeqList()
{
  length = 0;
}
template <typename T>
SeqList<T>::SeqList(T a[], int n)
{
      if (n>MaxSize) 
	  {
	  	throw "ParameterError";
	  }
      else
      {
	  	for (int i=0; i<n; i++)  
        data[i]=a[i];
      	length=n;
	  }
}
template <typename T>
void SeqList<T>::Insert(int i, T x)
{ 
      if (length>=MaxSize) throw "OverFlow";
      if (i<1 || i>length+1) throw "SynaxError";
      for (int j=length; j>=i; j--)
        data[j]=data[j-1];   //
      data[i-1]=x;
      length++;
}

template <typename T>
SeqList<T>::~SeqList(){} 
template <typename T>
T SeqList<T>::Delete(int i)
{ 
      if (length==0) throw "Underflow";
      if (i<1 || i>length) throw "SynaxError";
      T x=data[i-1];
      for (int j=i; j<length; j++)
        data[j-1]=data[j];   
      length--;
      return x;
}
template <typename T>
T SeqList<T>::Locate(T x)
{   
      for (int i=0; i<length; i++)
        if (data[i]==x)  return i+1 ;  
      return 0;  
}
template <typename T>
void SeqList<T>::PrintList()
{
  for (int i=0; i<length; i++)
	cout<<data[i]<<"  ";
  cout<<endl;
}
template <typename T>
void SeqList<T>::len()
{
  cout<<"Length: "<<length<<endl;
}
