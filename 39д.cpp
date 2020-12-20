#include <iostream>
using namespace std;

int main() {
	float a0 = 1,t = 1,sum = 0, ak, n;
	std::cin >> n;
	for (float k = 1; k <= n; k++) {
		
		ak = k * a0 + 1 / k;
		a0 = ak;
		t *= k;
		sum +=  ((pow(2,k) / t) * ak);
		std::cout << "sum= " << sum;
	}
	
	return 0;

}