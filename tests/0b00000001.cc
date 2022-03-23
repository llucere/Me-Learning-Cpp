#include <iostream>
#include <vector>
#include <map>

using std::cout;
using std::map;

#define str_int_pairs map<std::string, int>

int main(void) {
	str_int_pairs methamphetamine {
		{"a", 5},
		{"b", 10},
		{"c", 15}
	};

	str_int_pairs::iterator it = methamphetamine.begin();
	while (it != methamphetamine.end()) {
		cout << it->first << ' ' << it->second << '\n';
		it++;
	}

	return 0;
}