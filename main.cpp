#include <iostream>
#include <string>
#include "dice.cpp"
using namespace std;

class Cat{
	public:
	int size = 22;
	string breed = "house";
		
	void roar(){
		// int size = 45;
		cout << "The " << size << " inch " << breed;
		cout << " cat says... Roar!!" << endl;
		}
};


int main(){
	
	Cat tiger;
	Cat house;
	
	cout << "We have a cat" << endl;
	tiger.size = 45;
	tiger.breed = "tiger";
	tiger.roar();
	
	cout << "Cat 2 is created" << endl;
	house.roar();

	
	cout << "Create a 8 sided dice" << endl;
	Dice d6;
	Dice d8;
	d8.setNumberOfSidez(8);
	cout << "Roll the dice" << endl;
	cout << "   the 6 sided dice rolls a " << d6.roll() << endl;
	d8.setNumberOfSidez(1000);
	cout << "   the 8 sided dice rolls a " << d8.roll() << endl;
	
	return 0;
}
	