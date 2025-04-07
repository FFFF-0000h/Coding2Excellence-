#include <iostream>

using namespace std;

int main()

{

int a,b,aux;

///Reading data from keyboard

cout<<"a=";

cin>>a;

cout<<"b=";

cin>>b;

cout<<"Values before  swapping: a = "<<a<<", b = "<<b<<endl;

///Swapping a and b

aux = a;

a = b;

b = aux;

cout<<"Values after swapping: a = "<<a<<", b = "<<b;

return 0;

}
