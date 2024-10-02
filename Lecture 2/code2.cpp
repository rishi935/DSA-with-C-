// [A - Z] - [65 - 90]

#include <iostream>
using namespace std;

int main(){
   char ch;
cout<< "Enter character -"<< endl;
cin>>ch;

    if(ch >= 65 && ch<= 90){
    cout<< "uppercase\n";
}else{
    cout<<"lowercase\n";
     return 0;
}
}

// Here implicit type conversion is going on.......................