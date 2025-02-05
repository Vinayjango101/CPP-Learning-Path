// C++ Fundamentals Learning Path.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This Solution of Visual Studio Marks a Start to My Learning Path of C++ 
//Date of start - 02/02/2025 
//Time - 12:55 AM | IST

// what is C++
/* C++ is a High-Level Programming Language, Designed for System
and Application Programming

1. Developed By - Bjarne Stroustrup at Bell labs in 1983
as an extension for the C language.

2. C++ is a OOP or Object Oriented Programming language .
allowing Developers to create classes and objects and to define methods and properties for these Objects.


3. C++'s Key Feature is That it also supports Low-Level System Programming making it suitable for Developing -
Operating Systems, Device Drivers, and Other System Software
it also has a rich set of libraries making it a popular choice for Developing Desktop Applications as well as Games and other Comples Applications

4. C++ provides Pointer Support which aids users to directly manipulate storage addresses this helps in doing Low-Level Programming (when one might need to have explicit Control on the storage of variables

5. C++ is a Compiled Language , Contributing to its Speed !
*/

// A simple hello World Program in C++ 
//------------------------------------------------------------------------------------------------------------------------
#include <iostream> //This is a HEADER FILE Called here !

using namespace std;
int main()
{
    std::cout << "Hello World!\n"; //hello world simple program !
    //in the above line the \n at the end is called as a ESCAPE character it exists and starts a new line !

    std::cout << "Hello World!" << std::endl;
    // in the above example the endl; at the end is the short form of END LINE.
//------------------------------------------------------------------------------------------------------------------------
    //C++ VARIABLES/VARS 

    int age; // stores integers (whole numbers) WITHOUT DECIMALS  such as 123 or -123 .

    double percentage = 99.9; //stores floating point numbers WITH DECIAMLS such as 123.5 or -123.5 .

    char letter = 'a'; //stores single characters such as 'A' or 'a' | CHARS ARE SURROUNDED BY SINGLE QUOTES. 

    string greet = "Hello john"; //stores text such as "Hello john" | STRINGS ARE SURROUNDED BY DOUBLE QUOTES.

    bool conditon_value = true; //stores values with two states TRUE or FALSE.
  //------------------------------------------------------------------------------------------------------------------------
    //DECLARING VARIABLES/VARS | ASSIGNING VALUE | ACCESSING THE VALUE AND PRINTING IT

    // type_of_vars   var_name  = var_value;   --> SYNTAX OF DECLARING VARS.

    //FOR EXAMPLE :-
    string address_info = "5th street mumbai india."; // Here the var of type STRING is ASSIGNED the Value of "5th street mumbai india" -> address.
    cout << address_info << endl; //here we access and print the var using "COUT"
    //------------------------------------------------------------------------------------------------------------------------
    
    //C++ DECLARING MULTIPLE VARS IN SINGLE LINE. 

    string name = "jhon", lastname = "adam", address = "5th street avenue";

    cout << name + lastname + address;

}



