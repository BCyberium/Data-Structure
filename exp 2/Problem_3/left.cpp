#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

const int Max = 7;
const int k = 2;

void CreatRand(int a[], int len)
{
    srand(time(NULL));
    for (int i = 0; i < len; i++)
    {
        a[i] = 1 + rand() % 100;
    }
}

void Reverse(int input[], int from, int to)
{
    int temp;
    for (int i = 0; i < (to - from) / 2 + 1; i++)  // 注意: 这个条件判断改为 +1 
    {
        temp = input[from +i];
        input[from + i] = input[to - i];
        input[to - i] = temp;
    }
}

void Converse(int array[], int len, int k)
{
    Reverse(array, 0, k - 1);
    Reverse(array, k, len - 1);
    Reverse(array, 0, len - 1);
}

int main()
{
    int a[Max] = {};
    CreatRand(a, Max);
    cout<<"For the series:"<<endl;
    for (int i = 0; i < Max; i++)
    {
        cout<<a[i]<<" ";
    }
    Converse(a, Max, k);
    cout<<"Output:"<<endl;
    for (int i = 0; i < Max; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}