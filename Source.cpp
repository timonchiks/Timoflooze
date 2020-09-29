#include <string>
#include <iostream>
using namespace std;

class door {
public:
	std::string color;
	int size;
};

class body {
public:
	int size;
	std::string color;
	std::string type;
};
class inlook {
public:
	bool skin = false;
	bool freezer = false;
	bool navigator = false;
};

signed main() {
	body A1;
	inlook A2;
	door A3;
	while (1) {
		std::cin >> a;
		if (a == 1) std::cin >> A3.color;
		if (a == 2) std::cin >> A3.size;
		if (a == 3) std::cin >> A1.color;
		if (a == 4) std::cin >> A1.size;
		if (a == 5) std::cin >> A1.type;
		if (a == 6) std::cin >> A2.skin;
		if (a == 7) std::cin >> A2.freezer;
		if (a == 8) std::cin >> A2.navigator;
	}
	return 0;
}
