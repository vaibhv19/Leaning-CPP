#include <iostream>
using namespace std;

int main(){
    int age;
 cout << "Enter your age" << endl;
 cin >> age;
 //switch statement
 switch (age)
 {
 case 12:
     cout << "You are 12 years old"<<endl;
     break;
 case 18:
     cout << "You are 18 years old"<<endl;
     break;
 default:
     cout << "You are neither 12 nor 18 years old"<<endl;
 }
 
 // if else statement
 if(age>150 || age<1)
 {
     cout<<"Invalid age";
 }
 else if (age>=18){
     cout<<"You can vote";
 }
 else
 {
    cout<<"You cannot vote";
 }


return 0;
}