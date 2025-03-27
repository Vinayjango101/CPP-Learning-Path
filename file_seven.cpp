//Omitting Namespace
/*

You might see some C++ programs that run without the standard namespace library. The using namespace std line can be omitted and replaced with the std keyword, followed by the :: operator for string (and cout) objects:
*/


#include <iostream>

#include <cmath> // Library used for math functions in c++
int main()
{
std::string name = "jhon";
std::cout << "jhon" <<std::endl;
return 0;

std::cout << std::max(5, 10);


}
