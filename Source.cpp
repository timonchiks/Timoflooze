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
		std::cout << "Выберите цифру, \n 1 - цвет дверей \n 2 - размер дверей \n 3 - размер авто \n 4 - цвет авто \n 5 - тип авто \n 6 - обивка кожей \n 7 - кондиционер \n 8- навигатор";
		int a, b;
		std::cin >> a;
		(a == 1) ? (std::cin >> A3.color) : (b = 0);
		a == 2 ? std::cin >> A3.size : b = 0;
		a == 3 ? std::cin >> A1.color : b = 0;
		a == 4 ? std::cin >> A1.size : b = 0;
		a == 5 ? std::cin >> A1.type : b = 0;
		a == 6 ? std::cin >> A2.skin : b = 0;
		a == 7 ? std::cin >> A2.freezer : b = 0;
		a == 8 ? std::cin >> A2.navigator : b = 0;
	}
	return 0;
}