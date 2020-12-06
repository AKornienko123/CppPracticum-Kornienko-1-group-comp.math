#include <iostream>
#include <cmath>


double func(double x) {
	double a = sin(x) / x;

	return a;
}

double func_derivative(double x) {
	double b = (cos(x) / x) - (sin(x) / (x * x));

	return b;
}
int main() {
	double x;
	std::cin >> x;
	if (x == 0) {
		printf("1");
	}
	else {
		std::cout << "f(x) = " << func(x) << "\ng(x) = " << func_derivative(x);
	}
}