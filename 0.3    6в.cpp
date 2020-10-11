
#include <iostream>
#include <cmath>


double func(double x) {
	double a = x / (1 + abs(x));

	return a;
}

double func_derivative(double x) {
	double b = (func(x) / x) - x / pow((1 + abs(x)),2);

	return b;
}
int main() {
	double x;
	std::cin >> x;
	std::cout << "f(x) = " << func(x) << "\ng(x) = " << func_derivative(x);
}
