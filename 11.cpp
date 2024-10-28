#include <iostream>
#include <algorithm>
using namespace std;
template <class The, class One>
class Thenon {
public:
	The print(One arr[], One n)
	{
		for (One i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}

	}
};
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	reverse(arr, arr + n);
	Thenon <void, int > c;
	c.print(arr, n);
	return 0;
}