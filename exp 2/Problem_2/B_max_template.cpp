#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

const int Max = 10;

const int FIND = 2;

template <typename T>
void BubbleFind(T a[], int len, int goal)
{
    T temp;
    for (int j = 0; j < goal; j++)
    {
        for (int i = 1; i < len - j; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
}

void CreatRand(int a[], int len)
{
    srand(time(NULL));
    for (int i = 1; i <= len; i++)
    {
        a[i] = 1 + rand() % 100;
    }
}

void CreatRandDouble(double c[], int len)
{
    srand(time(NULL));
    for (int i = 1; i <= len; i++)
    {
        c[i] = rand() / double(RAND_MAX);
    }
}


int main()
{
    int a[Max + 1] = {0}, b[Max + 1] = {0};
    CreatRand(a, Max);
    for (int i = 0; i <= Max; i++)
    {
        b[i] = a[i];
    }
    cout<<"For the random series: "<<endl;
    for (int i = 1; i <= Max; i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    BubbleFind(b, Max, FIND);
    cout<<"The largest & the second largest: "<<endl;
    for (int i = Max; i > Max - FIND; i--)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;

    double c[Max + 1] = {0.0}, d[Max + 1] = {0.0};
    CreatRandDouble(c, Max);
    for (int i = 0; i <= Max; i++)
    {
        d[i] = c[i];
    }
    cout<<"For the double random series: "<<endl;
    for (int i = 1; i <= Max; i++)
    {
        cout<<d[i]<<" ";
    }
    cout<<endl;
    BubbleFind(d, Max, FIND);
    cout<<"The largest & the second largest: "<<endl;
    for (int i = Max; i > Max - FIND; i--)
    {
        cout<<d[i]<<" ";
    }
    cout<<endl;

    return 0;
}
