/* Для класса fraction перегрузить операции:
 * сложения (+)
 * сравнении (!=)
*/

#include "fraction.h"
#include <iostream>

int main()
{
	Fraction a1(10, 11);
	Fraction a2(12, 11);
	Fraction b1(8/73);

	std::cout << "a1 + a2 = " << a1 + a2 << std::endl;

	if (b1 != a1)
		std::cout << "b1 != a1\n";
	else
		std::cout << "b1 == a1\n";

	return 0;
}
