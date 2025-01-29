#include<iostream>
using namespace std;

// int main(){
//     int n = -45;
//     if( n >= 0) {
//         cout << "n is positive" << endl;
//     }
//     else {
//         cout << "n is negative" << endl;
//     }
//     return 0;
// }

// If - else if - else : 
// int main() {
//     int age;
//     cout << "Enter your age Sir : " ;
//     cin >> age;
//     if(age < 18) {
//         cout << "You can't vote , You can't drive!" << endl;
//     }
//     else if(age >= 18 && age < 60) {
//         cout << "You can Drive and Vote!" << endl;
//     }
//     else {
//         cout << "You have retired Sir! , Now enjoy your life and let other members do for you!" << endl;
//     }
//     return 0;
// }

// Odd or Even : 

// int main() {
//     int number;
//     cout << "Enter a number to check that it is even or odd : ";
//     cin >> number;

//     if(number % 2 == 0) {
//         cout << "It is an even number!" << endl;
//     }
//     else {
//         cout << "It is an odd number!" << endl;
//     }
//     return 0;
// }

// Grading System -> >=90 'A' , 80-90 'B' <80 'C'

// int main() {
//     int marks;
//     cout << "Enter your marks : ";
//     cin >> marks;
//     if(marks >= 90) {
//         cout << "Your grade is : " << "A" << endl;
//     }
//     else if(marks >= 80 && marks < 90) {
//         cout << "Your grade is : " << "B" << endl;
//     }
//     else {
//         cout << "Your grade is : " << "C" << endl;
//     }
//     return 0;
// }

// Lowercase or Uppercase : 

// int main() {
//     char letter;
//     cout << "Enter a character to check lowercase or uppercase";
//     cin >> letter;
//     int letterASCII = letter;
//     if(letterASCII >=65 && letterASCII <= 90) {
//         cout << "Uppercase Letter Entered!" << endl;
//     }
//     else if( letterASCII >=97 && letterASCII <= 122) {
//         cout << "Lowercase Letter Entered!" << endl;
//     }
//     else {
//         cout << "You didn't entered a valid alphabet !";
//     }
//     return 0;
// }

// Ternary Statement : 

// int main() {
//     int number;
//     cout << "Enter a number to check positive or negative : ";
//     cin >> number;
//     cout << (number > 0 ? "The number is positive!" : "The number is negative!") << endl; 
//     return 0;
// }

// Loops : 
// Print numbers from 1 to n (user input)

// while loop : 

// int main() {
//     int i = 1;
//     int n;
//     cout << "Enter the number you want upto the count goes on : " ;
//     cin >> n;
//     while( i <= n){
//         cout << i << " ";
//         i++;
//     }
//     cout << endl;
//     return 0;
// }

// For loop : 

// int main() {
//     int number;
//     cout << "Enter a number you want upto the count goes on : ";
//     cin >> number;

//     for(int i=1 ; i <= number ; i++) {
//         cout << i << " ";
//     }
//     cout << endl;
//     return 0;
// }

// Question : Sum of 1 to n  

// int main(){
//     int number;
//     cout << "Enter the number you want upto be added : ";
//     cin >> number;
//     int sum = 0;
//     for(int i=1 ; i<= number ; i++) {
//         sum += i;
//         if(i == 5) {
//             break;
//         }
//     }
//     cout << "The sum is : " << sum << endl;
//     return 0;
// }

// int main() {
//     int number;
//     cout << "Enter the number you want upto be added :";
//     cin >> number;
//     int sum = 0;
//     int i = 1;
//     while(i <= number){
//         sum += i;
//         if(i == 5) {
//             break;
//         }
//         i++;
//     }
//     cout << "The sum is : " << sum << endl;
//     return 0;
// }

// Question : Sum of all odd numbers upto n : 

// int main() {
//     int number;
//     cout << "Enter a number upto which odd numbers will be added : ";
//     cin >> number;
//     int sum = 0;

// // using for loop : 

//     // for(int i=1 ; i<= number ; i++){
//     //     if(i % 2 != 0){
//     //         sum += i;
//     //     }
//     // }

// // Using while loop : (in the case of even)
//     int i = 1;
//     while(i <= number){
//         if(i % 2 == 0) {
//             sum += i;
//         }
//         i++;
//     }
//     // cout << "The odd numbers sum is : " << sum << endl;
//     cout << "The even numbers sum is : " << sum << endl;
//     return 0;
// }

// Do while Loop : 

// int main() {
//     do {
//         cout << "Hello World!" << endl;
//     }
//     while(3 > 5);
//     return 0;
// }

// Check whether a number is prime or not ?

// int main() {
//     int number;
//     cout << "Enter a number for checking whether a number is prime or not !";
//     cin >> number;
//     bool isPrime = true;

//     for(int i=2 ; i*i<= number ; i++) {
//         if(number % i == 0){
//             isPrime = false;
//             break;
//         }
//     }
//     if(isPrime == true) {
//         cout << "Your given number is prime!" << endl;
//     }
//     else {
//         cout << "Your given number is not Prime number!" << endl;
//     }
//     return 0;
// }


// Nested Loops : 
// print this : 
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *

// int main() {
//     int n ;
//     cout << "What number will be your rows and columns : ";
//     cin >> n;
//     for(int i = 1 ; i <= n ; i++) {
//         for(int j = 1 ; j <= n ; j++) {
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Homework : 
// Q1 Sum of all numbers from 1 to N which are divisible by 3 . 


// int main() {
//     int number;
//     cout << "Enter the number upto which you want to add numbers that are divisible by 3 : ";
//     cin >> number;
//     int sum = 0;
//     for(int i = 1 ; i <= number ; i++) {
//         if(i % 3 == 0){
//             sum += i;
//         }
//     }
//     cout << "The sum is : " << sum << endl;
//     return 0;
// }

//Q2 Print factorial of a number n: 

// int main(){
//     int number ;
//     cout << "Enter a number for factorial : ";
//     cin >> number;
//     int mul = 1;
//     for(int i = number ; i >= 1 ; i--){
//         mul *= i;
//     }
//     cout << "The factorial is : " << mul << endl;
//     return 0;
// }