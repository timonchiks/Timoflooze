#include <D:/Visual_Studio/stdc++.h>

class tree {
public:
	tree obj;
	tree box;
	bool full = false;
	tree dod(tree ob) {
		if (ob.full == false) break;
		else {
			dod(ob.obj);
			dod(ob.box);
		}
	}
};

signed main() {
	tree a;
	a.dod(a);
	return 0;
}
