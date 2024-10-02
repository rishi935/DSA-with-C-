/*
Implicit Conversion - Automatic conversion by compiler in small data type to big data type.
TypeCasting(Explicit conversion) - When programmer manually convert the big data type to small data type.


*/

#include <iostream>
using namespace std;

int main(){

// Implicit conversion
   char grade = 'A';
   int value = grade;
   cout<< value<<endl;


//Type casting 
   double price = 100.99;
   int newPrice = int(price);
    return 0;
}