#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

const int Max = 5;

template <typename T>
void BubbleSort(T a[], int len)
{
    T temp;
    for (int j = 0; j < len; j++)
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
    // srand(time(NULL));
    for (int i = 1; i <= len; i++)
    {
        a[i] = 1 + rand() % 100;
    }
}

template <typename T>
void CreatRandx(T c[], int len)
{
    // srand(time(NULL));
    for (int i = 1; i <= len; i++)
    {
        c[i] = rand() / T(RAND_MAX);
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
    cout<<"For the int random series: "<<endl;
    for (int i = 1; i <= Max; i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    BubbleSort(b, Max);
    cout<<"After Bubble Sort, now the series: "<<endl;
    for (int i = 1; i <= Max; i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;

    float c[Max + 1] = {0.0}, d[Max + 1] = {0.0};
    CreatRandx(c, Max);
    for (int i = 0; i <= Max; i++)
    {
        d[i] = c[i];
    }
    cout<<"For the float random series: "<<endl;
    for (int i = 1; i <= Max; i++)
    {
        cout<<d[i]<<" ";
    }
    cout<<endl;
    BubbleSort(d, Max);
    cout<<"After Bubble Sort, now the series: "<<endl;
    for (int i = 1; i <= Max; i++)
    {
        cout<<d[i]<<" ";
    }
    cout<<endl;

    double e[Max + 1] = {0.0}, f[Max + 1] = {0.0};
    CreatRandx(e, Max);
    for (int i = 0; i <= Max; i++)
    {
        f[i] = e[i];
    }
    cout<<"For the double random series: "<<endl;
    for (int i = 1; i <= Max; i++)
    {
        cout<<f[i]<<" ";
    }
    cout<<endl;
    BubbleSort(f, Max);
    cout<<"After Bubble Sort, now the series: "<<endl;
    for (int i = 1; i <= Max; i++)
    {
        cout<<f[i]<<" ";
    }
    cout<<endl;
    return 0;
}