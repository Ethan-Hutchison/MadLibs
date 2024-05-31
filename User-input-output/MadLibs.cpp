#include <iostream>
#include <string>
using namespace std;

int main () {
	string num;
	string place;
	string name;


	std::cout << " Please enter a whole number: ";
	getline (cin, num);


	std::cout << " Please enter a place: ";
	getline (cin, place);


	std::cout << " Please enter your name: ";
	getline (cin, name);

	cout << name << " found " << num << " aliens hiding in " << place << ".";
	return 0;

}