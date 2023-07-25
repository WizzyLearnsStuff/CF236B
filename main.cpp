#include<iostream>

using namespace std;

int main() {
	int primes[25] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

	unsigned int sum = 0;
	int a, b, c;
	cin >> a >> b >> c;
	for (int i = 1; i <= a; i++)
	for (int j = 1; j <= b; j++)
	for (int k = 1; k <= c; k++) {
		int g = 0;
		int div = 1;
		int l = i * j * k;
		while (g < 25 && l != 0) {
			int count = 1;
			while (l % primes[g] == 0) {
				count++;
				l /= primes[g];
			}
			g++;
			div *= count;
		}
		sum += div;
	}

	cout << (sum & (((unsigned int)1 << 30) - 1));
}
