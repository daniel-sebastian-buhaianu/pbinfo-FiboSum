#include <iostream>
using namespace std;
int maxfibst(int);
int main()
{
	int n;
	cin >> n;
	while (n)
	{
		int x = maxfibst(n);
		n -= x;
		cout << x << ' ';
	}
	return 0;
}
int maxfibst(int n)
{
	// cauta cel mai mare numar <= n din sirul fib
	int x, y, z;
	x = y = 0;
	for (z = 1; z <= n; z = x + y)
	{
		x = y;
		y = z;
	}
	return y;
}
// scor 100
