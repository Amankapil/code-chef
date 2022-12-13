// C++ Program to find n-th stair using step size
// 1 or 2 or 3.
#include <iostream>
using namespace std;

class GFG {

	// Returns count of ways to reach n-th stair
	// using 1 or 2 or 3 steps.
public:
	int findStep(int n)
	{
		if (n == 0)
			return 1;
		else if (n < 0)
			return 0;

		else
			return findStep(n - 3) + findStep(n - 2)
				+ findStep(n - 1);
	}
};

// Driver code
int main()
{
	int n;
}

// This code is contributed by SoM15242
