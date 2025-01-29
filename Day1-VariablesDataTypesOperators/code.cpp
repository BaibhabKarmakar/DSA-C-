// #include<iostream>      // This is called preprocessor directive .
// using namespace std;

// int main() {
//     cout << "Baibhab Karmakar!" << endl;
//     cout << "Baibhab" << endl << "Karmakar" << endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main() {
//     return 0;
// }

// This is boilerplate code for C++ lang . 


// #include<iostream>
// using namespace std;

// int main() {
//     int age = 25;
//     char grade = 'A';
//     float PI = 3.14f;
//     bool isSafe = true;
//     double e = 2.71;
//     cout << "The integer age of the programmer is : " << age << endl;
//     cout << "The char Grade programmer got is : " << grade << endl;
//     cout << "The value of the float PI is : " << PI << endl;
//     cout << "The value of boolean isSafe is : " << isSafe << endl;          // if true -> 1 , false -> 0
//     cout << "The value of double e is : " << e << endl;
//     cout << "The memory in the computer occupying to store the grade is : " << sizeof(grade) << endl;
//     cout << "The memory in the computer occupying to store the age is : " << sizeof(age) << endl;
//     cout << "The memory in the computer occupying to store the value of PI is : " << sizeof(PI) << endl;
//     cout << "The memory in the computer occupying to store the value of isSafe is : " << sizeof(isSafe) << endl;
//     cout << "The memory in the computer occupying to store the value of e is : " << sizeof(e) << endl;
//     return 0;
// }  


// #include<iostream>
// using namespace std;
// int main() {
//     char grade = 'A';
//     int value = grade;
//     double price = 109.99;
//     int newPrice = (int)price;
//     cout << value << endl;
//     cout << "The typecasted value of the double variable price is : " << newPrice << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int age;
//     cout << "Enter the age of yours : ";
//     cin >> age;
//     cout << "Your age will be after one year is : " << age + 1 << endl;
//     return 0;
// }


// Arithmetic Operators : 
// #include<iostream>
// using namespace std;

// int main() {
//     int a = 5 , b = 10;
//     cout << "The sum is : "<< a+b << endl;
//     cout << "The difference is : "<< a-b << endl;
//     cout << "The multiplication is : "<< a*b << endl;
//     cout << "The division is : "<< a/b << endl;
//     cout << "The modulo is : "<< a%b << endl;

//     cout << (5 / 2) << endl;
//     cout << (5 / (double)2) << endl;
//     return 0;
// }

// Relational Operators : 
// #include<iostream>
// using namespace std;

// int main() {
//     cout << (3 < 5) << endl;
//     cout << (3 > 5) << endl;
//     cout << (3 <= 5) << endl;
//     cout << (3 >= 5) << endl;    
//     cout << (3 == 5) << endl;    
//     cout << (3 != 5) << endl;   
//     return 0;
// }


// Logical Operators : 
// #include<iostream>
// using namespace std;
// int main() {
//     cout << !(3 > 5) << endl; // Logical NOT
//     cout << ((3 < 5) || (5 < 3)) << endl;    // (true || false) -> true (If anyone is true then OR will give true) . 
//     cout << ((3 < 5) && (5 < 3)) << endl;    // (true && false) -> false (If anyone is false then AND will give false) . 
//     return 0;
// }

// Unary Operators : 
#include<iostream>
using namespace std;

int main() {
    int a = 5;
    cout << ++a << endl;    // first increment then print
    a = 5;
    cout << a++ << endl;    // first print then increment
    a = 5;
    cout << --a << endl;    // first decrement then print
    a = 5;
    cout << a-- << endl;    // first print then decrement
    return 0;
}


