#include <iostream>
#include <vector>

int main() {
	int numberOfParticipants = 0;
	int nthParticipant = 0;
	int numberOfWinners = 0;
	
	std::cin >> numberOfParticipants >> nthParticipant;
	//Get all input values and store inside vector
	std::vector<int> scores;
	for (int i = 0; i < numberOfParticipants; i++) {
		int val;
		std::cin >> val;
		scores.push_back(val);
	}

	if (scores[nthParticipant-1] < 1) {
		//sum all positive values from left
		for (int i = 0; i < nthParticipant- 1; i++) {
			if (scores[i] > 0)
				numberOfWinners++;
		}
	}
	else {
		//means current score is >= 1
		for (int i = nthParticipant-1; i < scores.size()-1; i++) {
			if (scores[i+1] == scores[i]) {
				numberOfWinners++;
				continue;
			}
			//If here, means scores[i+1] < score[i], so break loop.
			break;
		}
		numberOfWinners += nthParticipant;
	}
	std::cout << numberOfWinners << std::endl;
	return 0;
}
