#include <iostream>
#include <thread>

class Abel {
public: 
	static void countDown(int count) {
		for (int i = 0; i < count; i++) {
			std::cout <<"\nHello Belaye, things are getting easier" << std::endl;
			std::cout << "Thank God for that!" << std::endl; 
		}
	}
};

int main() {
	std::thread Thread1(&Abel::countDown, 3); // Crating a thread using a static 
	Thread1.join();							 // member function. 

	std::cout << "\nRembember Bela underdogs seem slow at the begining. Remember that!!" << std::endl; 

	return 0; 
}