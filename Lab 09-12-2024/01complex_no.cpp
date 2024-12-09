//Compare 2 complex numbers
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,d;

    cout<<"Enter the ist complex number only a and b (a+ib)\n";
    cin>>a>>b;
    float mag1=pow((a*a+b*b),0.5);

    cout<<"Enter the 2nd complex number only a and b (a+ib)\n";
    cin>>c>>d;
    float mag2=pow((c*c+d*d),0.5);

    if(mag1>mag2){
        cout<<"The ist complex number is greatest";
    }
    else if(mag2>mag1){
        cout<<"The 2nd complex number is greatest";
    }
    else cout<<"Both numbers are equal";

    return 0;

}