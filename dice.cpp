#include <string>
#include <time.h>

using namespace std;

class Dice{
	private:
		int sides = 6;
		
	public:
		void setNumberOfSidez(int s){
			if(s <= 100){
				sides = s;
			}
		}
		
		int roll(){
			srand(time(NULL));
			return rand() % sides + 1;
		}
};
