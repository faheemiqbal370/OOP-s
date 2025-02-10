#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
    int temp=0;
    temp= *x;
    *x=*y;
    *y=temp;
    cout<<*x<<*y;
    cout<<"\n";
}
int main()
{
    int a,b;
    cout<<"Enter two Numbers\n";
    cin>>a>>b;
    cout<<"Value of a and b before swaping\n";
    cout<<a<<b;
    cout<<"\n";

    swap(&a,&b);
    cout<<"Value after swaping\n";
    cout<<a<<b;                                           
}