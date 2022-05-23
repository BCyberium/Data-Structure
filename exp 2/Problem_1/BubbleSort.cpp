#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

const int Max = 20;
const int ITERATION = 100000;
void BubbleSort(int a[], int len);
void CreatRand(int a[], int len);

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
    clock_t start, end;
    double total;
    start = clock();
    BubbleSort(b, Max);
    end = clock();
    total = (double)(end - start) / CLOCKS_PER_SEC;
    cout<<"After Bubble Sort, now the series: "<<endl;
    for (int i = 1; i <= Max; i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    cout<<"Bubble sort, total = "<<total<<endl;
    start = clock();
    for (int iter = 0; iter < ITERATION; iter++)
    {
        CreatRand(a, Max);
    }
    end = clock();
    double time_1 = (double)(end - start) / CLOCKS_PER_SEC;
    for (int iter = 0; iter < ITERATION; iter++)
    {
        CreatRand(a, Max);
        BubbleSort(b, Max);
    }
    end = clock();
    double time_2 = (double)(end - start) / CLOCKS_PER_SEC;
    double average = (time_2 - time_1) / ITERATION;
    cout<<"Average time after "<<ITERATION<<" iterations: "<<average<<" s."<<endl;
    return 0;
}

void CreatRand(int a[], int len)
{
    // srand(time(NULL));
    for (int i = 1; i <= len; i++)
    {
        a[i] = 1 + rand() % 100;
    }
}

void BubbleSort(int a[], int len)
{
    int temp;
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
