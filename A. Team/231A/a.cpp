#include <iostream>

int main() {
	int nProblems = 0;
	std::cin >> nProblems;
	int sumOfSolveable = 0;
	for (int i = 0; i < nProblems; i++) {
		int votes[3] = {0};
		int yesVotes = 0; 
		for (int j = 0; j < 3; j++) {
			std::cin >> votes[j];
			if (votes[j] == 1)
				yesVotes++;
		}
		if (yesVotes >= 2)
			sumOfSolveable++;
	}
	std::cout << sumOfSolveable << std::endl;
	return 0;
}
