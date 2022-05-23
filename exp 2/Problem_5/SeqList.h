#ifndef SeqList_H
#define SeqList_H
const int MaxSize=10;
template <typename T>    
class SeqList
{
public:
   SeqList();             
   SeqList(T a[], int n);       
   ~SeqList();                  
   void Insert(int i, T x);  
   T Delete(int i);        
   T Locate(T x);      
   void PrintList();
   void len();    
private:
   T data[MaxSize];
   int length;
};
#endif
