#include "RequiredHeaders.h"

int main(int argc, char** argv) {
	std::ios::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	if (argc == 1) {
		std::cerr << "No Arguments Passed!\n";
		return -1;
	}

	if (std::string(argv[1]) == "01Knapsack") {
		
		std::cerr << "Knapsack Time!\n";
		
		std::cerr << "Enter Nunber of Objects and Capacity:\n";
		std::vector<int> sack_info{};
		int num{};
		for (int i = 0; i < 2; i++) {
			std::cin >> num;
			sack_info.push_back(num);
		}
		
		int N{};
		N = int(sack_info.at(0));
		
		int C{};
		C = int(sack_info.at(1));

		std::cerr << "Enter Value Array:\n";
		std::vector<int> Value{};
		int val{};
		for (int i = 0; i < N; i++) {
			std::cin >> val;
			Value.push_back(val);
		}

		std::cerr << "Enter Weight Array:\n";
		std::vector<int> Weight{};
		int wt{};
		for (int i = 0; i < N; i++) {
			std::cin >> wt;
			Weight.push_back(wt);
		}

		int result{};
		result = Knapsack(N, C, Value, Weight);
		std::cout << result;
	}

	return 0;
}
