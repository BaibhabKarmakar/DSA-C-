#include<iostream>
using namespace std;

// Q1 Square Pattern : 
    // 1 2 3 4
    // 1 2 3 4 
    // 1 2 3 4 
    // 1 2 3 4


// int main() {
//     int n;
//     cout << "Enter the number of rows : ";
//     cin >> n;
//     for(int i = 0 ; i < n ; i++) {
//         for(int j = 1 ; j <= n ; j++) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// Q2 Square Pattern with Stars : 
    // * * * *
    // * * * *
    // * * * * 
    // * * * *

// int main() {
//     int n;
//     cout << "Enter the number of rows : ";
//     cin >> n;
//     for(int i = 0 ; i < n ; i++) {
//         for(int j = 0 ; j < n ; j++) {
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Q3 Square Pattern with Alphabets : 
    // A B C D
    // A B C D
    // A B C D
    // A B C D

// int main() {
//     int n;
//     cout << "Enter the number of rows : ";
//     cin >> n;

//     for(int i = 0 ; i < n ; i++) {
//         for(char j = 'A' ; j < 'A' + n ; j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// Q4 Square Pattern : 

    // 1 2 3 
    // 4 5 6 
    // 7 8 9

// int main() {
//     int n;
//     cout << "Enter the number of rows you want : ";
//     cin >> n;
//     int k = 1;          // for integer version of this pattern . 
//     char k1 = 'A';       // for alphabet version of this pattern (Home work)
//     for(int i = 0 ; i < n ; i++) {
//         for(int j = 0 ; j < n ; j++) {
//             cout << k1 << " ";
//             k1++;
//         }
//         cout << endl;
//     }
//     cout << "After Pattern the value of k1 is : " << k1 << endl;
//     return 0;
// }

// Triangle Pattern : 
    // *
    // * * 
    // * * *
    // * * * *

// int main() {
//     int n;
//     cout << "Enter the number of rows : ";
//     cin >> n;

//     for(int i = 0 ; i < n ; i++) {
//         for(int j = 0 ; j <= i ; j++) {
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Triangle Pattern : 
    // 1
    // 22
    // 333
    // 4444

// int main() {
//     int n;
//     cout << "Enter the number of rows : " ;
//     cin >> n;
//     for(int i = 0 ; i < n ; i++) {
//         for(int j = 0 ; j <= i ; j++) {
//             cout << i+1 << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Triangle Pattern : 

    // A
    // B B
    // C C C
    // D D D D 

// int main() {
//     int n;
//     cout << "Enter the number of rows : ";
//     cin >> n;
//     char k = 'A';
//     for(int i = 0 ; i < n ; i++) {
//         for(int j = 0 ; j <= i ; j++){
//             cout << k << " ";
//         }
//         cout << endl;
//         k++;
//     }
//     return 0;
// }

// Triangle Pattern : 
    // 1
    // 1 2 
    // 1 2 3 
    // 1 2 3 4 


// int main() {
//     int n;
//     cout << "Enter the numbers of rows : ";
//     cin >> n;
//     for(int i = 0 ; i < n ; i++) {
//         int k = 1;
//         for(int j = 0 ; j <= i ; j++) {
//             cout << k << " ";
//             k++;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// Reverse Triangle Pattern : 
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1


// int main() {
//     int n;
//     cout << "Enter the number of rows : ";
//     cin >> n;
//     for(int i = 0 ; i < n ; i++) {
//         // for(char j = 'A'+i ; j >= 'A' ; j--) {
//         for(int j = i+1 ; j > 0 ; j--){             // for integer version
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// Floyd's Triangle pattern : 
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10


// int main() {
//     int n;
//     cout << "Enter the number of rows : ";
//     cin >> n;
//     int k = 1;
//     char k1 = 'A';              // Character version . (Home work)
//     for(int i = 0 ; i < n ; i++) {
//         for(int j = 0 ; j <= i  ;j++){
//             cout << k1 << " ";
//             k1++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Inverse Triangle Pattern : 
    // 1 1 1 1 
    //   2 2 2
    //     3 3
    //       4

// int main() {
//     int n;
//     cout << "Enter the number of rows : ";
//     cin >> n;
//     char k1 = 'A';
//     for(int i = 0 ; i < n ; i++) {
//         for(int j = 0 ; j < i ; j++) {
//             cout << " " << " ";
//         }
//         for(int k = 0 ; k < n - i ; k++){
//             cout << k1 << " ";
//             // cout << i+1 << " ";                    // This is for integer version . 
//         }
//         k1++;                      // this line is extra for alphabetical version . 
//         cout << endl;
//     }
//     return 0;
// }


// Pyramid Pattern : 

    //       1
    //     1 2 1 
    //   1 2 3 2 1
    // 1 2 3 4 3 2 1
 
// int main() {
//     int n;
//     cout << "Enter the number of rows : ";
//     cin >> n;
//     for(int i = 0 ; i < n ; i++) {
//         for(int j = 0 ; j < n - i - 1 ; j++){
//             cout << " " << " ";
//         }
//         for(int j = 1 ; j <= i+1 ; j++) {
//             cout << j << " ";
//         }
//         for(int j = i ; j > 0 ; j--){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Hollow Diamond Shape : 

//          * 
//        *   *
//      *       *
//    *           *
//      *       *
//        *   *
//          *

// int main() {
//     int n;
//     cout << "Enter the number of rows : ";
//     cin >> n;

//     for(int i = 0 ; i < n ; i++) {
//         for(int j = 0 ; j < n - i - 1 ; j++){
//             cout << " " << " ";
//         }
//         cout << "*" << " ";

//         if(i != 0) {
//             for(int j = 0 ; j < 2*i - 1 ; j++) {
//                 cout << " " << " ";
//             }
//             cout << "*" << " ";
//         }

//         cout << endl;
//     }
//     for(int i = 0 ; i < n-1 ; i++) {
//         for(int j = 0 ; j <= i ; j++) {
//             cout << " " << " ";
//         }
//         cout << "*" << " ";

//         if(i != n-2) {
//             for(int j = 0 ; j < 2*(n-i-2)-1 ; j++) {
//                 cout << " " << " ";
//             }
//             cout << "*" << " ";
//         }

//         cout << endl;
//     }
//     return 0;
// }

// Home work : Butterfly Pattern : 

    // *       *
    // **     **
    // ***   ***
    // **** ****
    // *********
    // *********
    // **** ****
    // ***   ***
    // **     **
    // *       *

#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows for the upper half
    
    // Upper half of the pattern
    for (int i = 1; i <= n; i++) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    // Lower half of the pattern
    for (int i = n; i >= 1; i--) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}