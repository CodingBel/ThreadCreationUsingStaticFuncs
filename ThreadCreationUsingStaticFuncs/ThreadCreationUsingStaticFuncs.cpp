#include <iostream>
#include <thread>

class Abel {
public: 
	static void countDown(int count) {
		for (int i = 0; i < count; i++) {
			std::cout <<"\nHellow Bel, things are getting easier" << std::endl; 
			std::cout << "Thank God for that!" << std::endl; 
		}
	}
};

int main() {
	std::thread Thread1(&Abel::countDown, 3); // Crating a thread using a static 
	Thread1.join();							 // member function. 

	return 0; 
}