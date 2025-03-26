#include <iostream>

using namespace std;
//string concatenation
// The Operator + can be used between strings to add them together to make a new string This is called as string concatenation.
 
int main()

{
string firstname = "jhon";
string lastname = "Doe";
string fullname = firstname + " " + lastname + " " ;
cout << fullname;

//Append 

string FULLNAME = firstname.append(lastname);
cout << FULLNAME << endl;

//Adding Numbers and Strings!
int x = 10;
int y = 20;
int z = x + y; //Z will be 30 (integer) 


//string length
//To get the Length of the string we use the .length(); function
/*
Tip: You might see some C++ programs that use the size() function to get the length of a string. This is just an alias of length(). 
It is completely up to you if you want to use length() or size():
*/
string key = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << "The Length of the String is: " << key.length();

/*

Access Strings

You can access the characters in a string by referring to its index number inside square brackets [].

This example prints the first character in myString:

*/

string greet = "Hello";
cout << greet[0]; //outputs H
}



