#include <iostream>
#include <string>

int main() {
	int line = 0;
	std::cin >> line;
	std::string text = "";
	for (int i = 0; i < line; i++) {
		std::cin >> text;
		if (text.length() > 10) {
			//use abbreviation and output
			std::cout << text[0] + std::to_string(text.length()-2)
							+ text[text.length()-1] << std::endl;
			continue;
		}
		//if not, return original input
		std::cout << text << std::endl;
	}
	return 0;
}
