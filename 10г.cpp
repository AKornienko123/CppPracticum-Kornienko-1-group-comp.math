#include <iostream>
# include <stdio.h>
using namespace std;
#define N 10
int main() {
	int x, Min;
	int a[N];
	for (int i = 0; i < N; i++) {
		printf("arr[%d] = ", i+1);
		cin >> x;
		a[i] = x;
	}
	Min = a[0];
	for (int i = 0; i < N; i += 2) {
		if (Min > a[i]) {
			Min = a[i];
			
		}
	}
	
	cout << "Min:" << Min;

}