#include <iostream>
using namespace std;

class SafeArray {
private:
	int lower_bound;
	int upper_bound;
	int arr[];
public:
	SafeArray(int l = 0, int u = 0);
	int& operator [] (int index);
	void display();
};
SafeArray::SafeArray(int l, int u) {
	lower_bound = l;
	upper_bound = u;
	arr[u -l];
}
int& SafeArray::operator[](int index) {
	if (index < lower_bound || index >= upper_bound) {
		cout << "You Enter invalid Index!\n";
		exit(1);
	}
	return arr[index -lower_bound];
}
void SafeArray::display() {
	for (int i = 0; i < upper_bound - lower_bound; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main() {
	SafeArray a1(75, 100);
	a1[76] = 20;
	a1[77] = 28;
	a1[99] = 29;
	a1.display();
	return 0;
}