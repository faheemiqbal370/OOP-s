#include<iostream>
using namespace std;
int main()
{
    int i;
    int a[5];
    cout<<"Enter the martks in 5 subjects \n";
 for(i=0;i<5;i++)
{
    cin>>a[i];
}
float percentage;
float total=0;
for(i=0;i<5;i++)
{
total =(total+a[i]);
}
percentage =total/5.0;
cout<<"Total marks Percentage of the Student is "<<percentage;
return 0;
}