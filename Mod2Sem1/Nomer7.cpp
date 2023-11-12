#include <iostream>
#include "vector3f.h"

using std::cout, std::endl;


int main() 
{
	mipt::Vector3f a = {1.0, 2.0, -2.0};
	mipt::Vector3f b = {4.0, -1.0, 3.0};
	cout << "a = " << a << endl << "b = " << b << endl;
	cout << "a + b = " << mipt::Vector3f a + mipt::Vector3f b << endl;
	cout << "-a = " << - mipt::Vector3f a << endl;
	cout << "Scalar product of a and b = " << mipt::Vector3f a * mipt::Vector3f b << endl;
	a /= 5;
	cout << "a after a /= 5;"  << a << endl;
	normalize(b);
	cout << "Normalized b:"  << b << endl;
	a += b;
	cout << "a after a+= b;" << a << endl;
}