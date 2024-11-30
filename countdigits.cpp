#include<iostream>
using namespace std;
int main()
{
    int i;
    int num;
    int count=0;
    int rem;
    cout<<"Enter the number to count its digits\n";
    cin>>num;
    while(num!=0)
    {
        rem=num%10;
        num=num/10;

count++;
    }
    cout<<count;
    
    return 0;
}