#include <iostream>

int main()
{
	std::cout << "ENTER A NUMBUR\n";
	int user_number;
	std::cin >> user_number;
	for (int i = 1; i <= user_number; i++) {
		std::string text = "";
		if (i % 3 == 0) {
			text = text + "Fizz";
		}
		if (i % 5 == 0) {
			text = text + "Buzz";
		}
		if (i % 2 == 0) {
			text = text + "Dizz";
		}
		if (text == "") {
			std::cout << i << "\n";
		}
		else {
			std::cout << text << "\n";
		}
	}
	
	



}
