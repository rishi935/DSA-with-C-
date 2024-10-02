#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
      bool isPrime = true;

    for(int i = 2; i*i<=n; i++){
        if(n%i == 0){
           isPrime = false;
        }
    }

    cout<<isPrime;
    return 0;

}

/*How i * i <= n checks divisors up to sqrt(n):
i * i <= n is equivalent to checking i <= sqrt(n) because if i * i exceeds n, it means i has gone past the square root of n.

For example, if n = 36, you are looking for numbers i such that:

When i = 1, 1 * 1 = 1 (less than or equal to 36, so we check if 36 is divisible by 1).
When i = 2, 2 * 2 = 4 (less than or equal to 36, so we check if 36 is divisible by 2).
When i = 6, 6 * 6 = 36 (equal to 36, so we check if 36 is divisible by 6).
When i = 7, 7 * 7 = 49 (greater than 36, so the loop stops).
This ensures we only check divisors up to the square root of n.

Why i * i is valid:
The condition i * i <= n indirectly enforces that i <= sqrt(n), but we avoid calculating sqrt(n) explicitly. Since i * i is integer arithmetic, we don't have to worry about floating-point precision issues, and the check remains accurate.

So, both i * i <= n and i <= sqrt(n) would give the same result, but i * i <= n is often more efficient and avoids unnecessary computations.*/