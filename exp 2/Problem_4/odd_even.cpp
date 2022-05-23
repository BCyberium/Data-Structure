#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

const int LEN = 10;

void CreatRand(int a[], int len)
{
    srand(time(NULL));
    for (int i = 0; i < len; i++)
    {
        a[i] = 1 + rand() % 100;
    }
}
void Adjust(int a[], int len)
{
    int temp;
    int i = 0, j = len - 1;
    while (i < j)
    {
        while (a[i] % 2 != 0)
        {
            i++;
        }
        while (a[j] % 2 == 0)
        {
            j--;
        }
        if (i < j)
        {
            temp = a[j];
            a[j] = a[i];
            a[i] = temp;
        }
        
    }
    
}

int main()
{
    int a[LEN] = {};
    CreatRand(a, LEN);
    cout<<"For the random series: "<<endl;
    for (int i = 0; i < LEN; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    Adjust(a, LEN);
    cout<<"After adjust: "<<endl;
    for (int i = 0; i < LEN; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}