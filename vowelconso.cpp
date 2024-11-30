#include<iostream>
using namespace std;
int main()

{
    char c;
    cout<<"enter the alphabet\n";
    cin>>c;
    int n=(int)c;
    if(n==65||n==69||n==79||n==85||n==73||n==97||n==101||n==105||n==117||n==111)
    {
        cout<<"vowel";
    }
    else
    cout<<"Consonent";

    return 0;
}