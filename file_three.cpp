// file_three.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello from File Three !\n";
    
    int a; //Declared a variable of type "int" here.
    std::cout << "Enter a Number: "; // Prompting the user to enter the Number Here.
    std::cin >> a; //Storing the number given by the user in the Variable "int a".
    std::cout << a <<std::endl; // Printing the final output here.

    /*Making a Simple Calculator in C++  */
    int x, y; //Declared Two Variables of type "int" here.
    int sum; // Declared the Sum function Variable here.
    std::cout << "Enter the First Number: "; //Prompting the user to enter the First Number here.
    std::cin >> x; //storing the given first number in the variable of x.
    std::cout << "Enter the Second Number: "; //Prompting the user to enter the Second Number here.
    std::cin >> y; //storing the given first number in the variable of y.
    sum = x + y; //Defined the Sum Function here.
    std::cout << sum << std::endl; //printing the final output here.


}
