#include<iostream>
using namespace std;

int main(){
    int index = 0;
    // while loop
 while(index<10)
 {
     cout<<"We are at index number "<<index<<endl;
     index = index+1;
 }
 int Index=0;
    // do while loop
 do
 {
     cout << "We are at Index number " << index << endl;
     Index = Index + 1;
 } while (Index < 10);
   
    // for loop
 for (int i = 1; i <= 10; i++)
 {
     cout<<"The value of i is "<<i<<endl;
 }
    return 0;
}