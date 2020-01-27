#include <iostream>
using namespace std;

float hat(float weight, float height) {
	return weight/height*2.9;
}
float jacket(float weight, float height, int age) {
	return weight*height/288 + (age>=30?age/10-2:0)*0.125;
}
float waist(float weight, int age) {
	return weight/(5.7 + (age-28>0?(age-28)/2:0)*0.1);
}

int main() {
	for(;;) {
	// Get data //
		int age;
		float height;
		float weight;
		cout << "Age: ";
		cin >> age;
		cout << "Height: ";
		cin >> height;
		cout << "Weight: ";
		cin >> weight;
	// Output data //
		cout << "Hat size: " << hat(weight, height) << endl;
		cout << "Jacket size: " << jacket(weight, height, age) << endl;
		cout << "Waist size: " << waist(weight, age) << endl;
	// Loop question //
		int loop;
		cout << "Want to run again? (y/n) ";
		cin >> loop;
		if (!loop) return 0;
		cout << endl;
	}
}