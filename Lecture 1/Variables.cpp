/*
Data Type - 

 int  - 4 Byte (8 bits is 1 byte)
 char - 1 Byte
 float - 4 Byte
 bool - 1 Byte
 double - 8 Byte
 */

#include <iostream>
using namespace std;

int main() {
int age = 25;
char grade = 'a';
float PI = 3.14f;
bool isSafe = false;
double price = 100.34;
cout<< sizeof(age)<<endl;

return 0;
}