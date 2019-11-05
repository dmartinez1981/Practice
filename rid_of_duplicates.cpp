#include <iostream>
#include <vector>
#include <algorithm>

void remove(std::vector<int> &v)
{
	auto end = v.end();
	for (auto it2 = v.begin(); it2 != end; ++it2) {
		end = std::remove(it2+1, end, *it2);
	}

	v.erase(end, v.end());
}

int main()
{
	std::vector<int> v = { 5, 2, 1, 3, 4, 2, 2, 4, 5, 5, 6 };

	remove(v);

	for (auto it2 = v.cbegin(); it2 != v.cend(); ++it2)
		std::cout << *it2 << ' ';

	return 0;
}