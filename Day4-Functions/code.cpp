#include<iostream>
using namespace std;

// // Function definition : 
// int printHello() {
//     cout << "Hello is Printing...!" << endl;
//     return 3;
// }
// // Function to calculate sum of 2 numbers : 
// int sum(int num1 , int num2) {
//     return num1 + num2;
// }
// // Function to get minimum of 2 numbers : 

// int min(int num1 , int num2) {
//     if(num1 > num2) {
//         return num2;
//     }
//     else {
//         return num1;
//     }
// }

// // Q1 Create a function to calculate the sum of N numbers : 

// int sumOfNnumbers(int n) {
//     int sum = 0;
//     for(int i = 1 ; i <= n ; i++) {
//         sum += i;
//     }
//     return sum;
// }

// Q2 create a function to calculate factorial of a number : 
// int fact(int n) {
//     int mul = 1;
//     for(int i = n ; i >= 1 ; i--){
//         mul *= i;
//     }
//     return mul;
// }

// int sum(int a , int b) {
//     a+=10;
//     b+=10;
//     return a + b;
// }

// Q3 Calculate Sum of digits of a number : 
// int sumOfDigits(int n) {
//     int sum = 0;
//     while(n > 0) {
//         int r = n%10;
//         sum += r;
//         n/=10;
//     }
//     return sum;
// }

// Q4 Calculate nCr from given n and r 
// int nCr(int n , int r) {
//     int result = 0;
//     result = fact(n) / (fact(r) * fact(n-r));
//     return result;
// }

// Homework 1 : WAF to check if a number is prime or not . 
bool checkPrime(int n) {
    for(int i = 2 ; i*i <= n ; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

// Homework 2 : Print all the prime numbers from 1 to n : 
void printPrimeNumbersUpton(int n) {
    for(int i = 1 ; i <= n ; i++) {
        bool result = checkPrime(i);
        if(result == true) {
            cout << i << " ";
        }
    }
    cout << endl;
}
// Homework 3 : WAF to print nth Fibbonacci : 
int nthFibbonacci(int n) {
    if(n == 0) {
        return 0;
    }
    if(n == 1 || n == 2) {
        return 1;
    }
    int result = 0;
    result = nthFibbonacci(n-1) + nthFibbonacci(n-2);
    return result;
}

int main() {
    // Function call : 
    // int result = printHello();
    // cout << "The returned value of the function() is : " << result << endl;
    // cout << "Now we are going to calculate a sum of 2 numbers : " << endl;
    // int num1 , num2;
    // cout << "Enter the integer num1 : " ;
    // cin >> num1;
    // cout << "Enter the integer num2 : " ;
    // cin >> num2;
    // int result = nCr(num1 , num2);
    // cout << "The nCr value for input is : " << result << endl;
    // // int ans = sum(num1 , num2);
    // int ans = min(num1 , num2);
    // // cout << "The result is : " << ans << endl;
    // cout << "The min number is : " << ans << endl;
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << "Nth fibbonacci is : " << nthFibbonacci(n) << endl;
    // printPrimeNumbersUpton(n);
    // cout << checkPrime(n) << endl;
    // cout << "The sum of the digits of the number is : " << sumOfDigits(n) << endl;
    // // int result = sumOfNnumbers(n);
    // int result = fact(n);
    // // cout << "The sum of N number is : " << result << endl;
    // cout << "The factorial of n is : " << result << endl;
    // int a = 5 , b = 10;
    // cout << sum(a , b) << endl;
    // cout << a << endl;
    // cout << b << endl;

    return 0;
}