#include <iostream>
int main()
{
	// C++ Identifiers 
/* C++ Identifiers must be identified with unique names these unique names are called as identifiers.
Identifiers can be short names such as "x" or "y" or Long names such as "totalsum" , "Age" Etc...
It is also Recommended to use descriptive names in order to create understandable and maintainable code...*/

//----------------------------------------------------------------------------------------------------------------------------
	// Example of a good Identifier 
	int min_per_hour = 60;

	// Example of a Bad Identifier
	int x = 60; //-> here we can see that its OK to name it "x" , but its not easy to understand what "x" Actually is.
	//----------------------------------------------------------------------------------------------------------------------------

	// C++ Constants
	/* When we DO NOT want OTHERS or YOURSELF to Change the Variable's Existing Vale , we use the "const" keyword (this declares the var as a CONSTANT
	which means "UNCHANGEABLE" and "READ-ONLY" ! */

	const int My_Number = 101; //-> Here We can see that the Var named "My_Number is Assigned the Value of "101" is its also a constant !"
	
	//    My_Number = 100;         // -> we can see that we cannot change it now !

	//You should always declare the variable as constant when you have values that are unlikely to change:-

	const int minutes_per_hour = 60;
	const float PI = 3.14;
	//Note On CONSTANTS 
	
	// When we Declare a Constant we must assign it a value (it throws a error)
	/*
	* const int MinPerHour;   -> Declaring a CONST variable first.
	* MinPerHour = 60;        -> Assigning a Value Later.
	*/


}
