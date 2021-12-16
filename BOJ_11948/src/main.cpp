#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto sum = int{ 0 };
	auto min = int{ 987654321 };

	for (int i = 0; i < 4; ++i) {
		int x;
		cin >> x;

		sum += x;
		if (x < min) {
			min = x;
		}
	}

	sum -= min;

	int e, f;
	cin >> e >> f;
	sum += (e < f ? f : e);

	cout << sum;

	return 0;
}