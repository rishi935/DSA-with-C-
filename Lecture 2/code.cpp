#include <iostream>
using namespace std;

int main(){
char ch;
cout<< "Enter character -"<< endl;
cin>>ch;

if(ch >= 'a' && ch<='z'){
    cout<< "Lowercase\n";
}else{
    cout<<"uppercase\n";
}

    return 0;

}