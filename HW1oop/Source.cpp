#include<iostream>
#include<string>
#include<vector>
#include<iterator>


class Drob {
private:
	double _a;
	double _b;
public:
	Drob(): _a(5.0), _b(10.0) {}
	Drob(double a, double b) {
		_a = a;
		_b = b;
	}
	double del(double a, double b) {
		_a = a;
		_b = b;
		return _a / _b;
	}
};
int main() {
	Drob d1;
	std::cout<<d1.del(4, 16);
	return 0;
}
