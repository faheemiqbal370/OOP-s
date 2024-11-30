/*Write a program that takes a student's score (out of 100) as input and displays the grade based on 
the following criteria:
• A: 90-100
• B: 80-89
• C: 70-79
• D: 60-69
• F: Below 60
Use if-else statements for this.*/
#include<iostream>
using namespace std;
int main(){
    int score;
    cout<<"Enter the score of the student\n";
    cin>>score;

    if(score>=90 && score<=100 ){
        cout<<"You got A grade";
    }
    else if(score>=80 && score<=89){
        cout<<"You got B grade";
    }
     else if(score>=70 && score <=79){
        cout<<"You got C grade";
    }
    else if(score>=70 && score <=79){
        cout<<"You got D grade";
    }
    else if(score>=60 && score<=69){
        cout<<"You got B grade";
    }
    else if(score<60){
        cout<<"You have failed\n F grade";
    }
    else{
        cout<<"INVALID INPUT";
    }
    return 0;
}