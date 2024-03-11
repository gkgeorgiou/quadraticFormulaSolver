#include <iostream>
#include <cmath>

int input();
int disc(int a, int b, int c);

int main()
{
	std::cout << " \n";
	std::cout << "This is a Quadratic function solver" << std::endl;
	std::cout << "A quadratic function is one of the form f(x) = ax2 + bx + c" << std::endl;
	std::cout << " \n";
	
	// Call Function input to get user values
	int a{ input() };
	int b{ input() };
	int c{ input() };

	// Call function disc to calculate the Discriminant
	int d{ disc(a, b, c) };

	// Leave an empty line between the inputs and the output
	std::cout << " \n";

	if (d < 0)
	{
		std::cout << "No real solutions" << std::endl;
		d = -d;

		float x1{};
		x1 = (-b + sqrt(d)) / (2 * a);

		float x2{};
		x2 = (-b - sqrt(d)) / (2 * a);

		std::cout << "The solutions are x1 = " << x1 << "i and x2 = " << x2 << "i" << std::endl;
	}

	else if (d == 0)
	{
		float x1{};
		x1 = (-b + sqrt(d)) / (2 * a);

		std::cout << "Double Solution x = " << x1 << std::endl;
	}

	else

	{
		float x1{};
		x1 = (-b + sqrt(d)) / (2 * a);

		float x2{};
		x2 = (-b - sqrt(d)) / (2 * a);

		std::cout << "The solutions are x1 = " << x1 << " and x2 = " << x2 << std::endl;
		
	}

	std::cout << " \n";

	return 0;
}