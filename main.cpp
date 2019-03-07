#include <iostream>
#include <string>
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

void newCat(Cat cougar){
	// Cougers are 62
	cougar.size = 62;
	cougar.breed = "cougar";
	cougar.roar();
	
}

int main(){
	
	Cat c;
	newCat(c);
	
	c.roar();
	
	Cat tiger;
	Cat house;
	
	cout << "We have a cat" << endl;
	tiger.size = 45;
	tiger.breed = "tiger";
	tiger.roar();
	
	cout << "Cat 2 is created" << endl;
	house.roar();
	
	
	
	
	
	return 0;
}
