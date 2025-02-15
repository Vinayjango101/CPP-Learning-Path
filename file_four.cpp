//C++ Data types
#include <iostream>
#include <string>

using namespace std; //
int main()
{
	int mynumber = 5; // Variable of Type "int" stores Integers (Whole Numbers).

	float myfloatnumber = 5.10;  // Variable of Type "float" stores Floating Point Numbers.

	double mydoublenumber = 5.100; // this is same as float.

	char myletter = 'V'; // // Variable of Type "char" stores single Characters (single letter), also single inverted commas should be used!.

	bool mybool = true; //Boolean Stores either one of "true" or "false"

	string mystring = "jhon"; // // Variable of Type "string" stores Strings/words.


	//---------------------------------------------------------------------------------------------------------------------------------------------------------




// Boolean Data Types:-

	bool iscodingfun = true;
	bool isfoodtasty = false;

	std::cout << iscodingfun << std::endl; //Outputs 1 (TRUE)
	std::cout << isfoodtasty << std::endl; //Outputs 2 (FALSE)




	// Strings
	std::string Greeting = "hello";
	std::cout << Greeting << std::endl;

	//to use strings , we must include the Additional Header File in the Source Code 
	// #include <string>
}

/*Data type    Size       Description*/
// 1.Boolean   1 Byte  Stores TRUE OR FALSE VALUES
// 2.char      1 Byte  Stores a Single Character/Letter/Numbers OR ASCII values.
// 3.int       2 - 4 Bytes Stores Whole Numbers Without Decimals.
// 4.float     4 Bytes Stores Fractional Numbers (one or more decimals.) (Sufficient for storing 6-7 decimal digits.)
// 5.double    8 Bytes Stores Fractional Numbers (Containing one or more Decimals Sufficient for storing 15 Decimal Digits.)


/*float vs. double

The precision of a floating point value indicates how 
many digits the value can have after the decimal point. 
The precision of float is only six or seven decimal digits, while double variables have a precision of about 15 digits. 
Therefore it is safer to use double for most calculations*/ 

