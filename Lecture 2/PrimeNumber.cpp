#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    bool isPrime = true;

    for(int i = 2; i<=n-1; i++){
        if(n%i == 0){
           isPrime = false;
        }
    }

    cout<<isPrime;

    return 0;
}