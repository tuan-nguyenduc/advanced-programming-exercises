#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void hoanViChuoi(string str) {
	if (str.size() == 0) {
		cout << "" << endl;
		return;
	}
	for (int i = 0; i < str.size(); i++) {
		hoanViChuoi(str.substr(1));
		rotate(str.begin(), str.begin() + 1, str.end());
	}

}
int main() {
	hoanViChuoi("ABC");
	return 0;
}