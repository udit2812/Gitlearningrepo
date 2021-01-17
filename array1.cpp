#include<iostream>
using namespace std;

int main()
{

int x;
cin>>x;

int array[x];

for(int i=0;i<x;i++)
    {
    cin>>array[i];
    }

for(int i=0;i<x;i++)
    {
    cout<<array[i]<< " ";
    }
    return 0;
}