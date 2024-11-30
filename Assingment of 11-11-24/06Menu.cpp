/*Create a menu-based program where the user can choose between "Vegetarian" and "NonVegetarian" options, then display a sub-menu with specific dishes based on the selection. Use 
nested switch statements to handle each menu and sub-menu option.*/
#include<iostream>
using namespace std;
int main(){
    int choice;
    cout<<"Enter:\n 1 For Veg Menu\n 2 For Non-Veg menu\n";
    cin>>choice;

    switch(choice)
    {
        case 1:
        cout<<"The Veg menu contains:\n(a) Veggie Sandwich\n(b) Rajma \n(c) Vegetable Pulao\n(d) Aloo Gobi\n(e) Palak Paneer\n";
        break;

        case 2:
        cout<<"The Non-Veg menu contains:\n(a) Butter Chicken\n(b) Chicken Biryani\n(c) Rogan Josh\n(d) Fish Curry\n(e) Tabak Maaz\n";
    }
    return 0;
}