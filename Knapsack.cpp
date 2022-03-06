#include "RequiredHeaders.h"

int memoize[102][1002] = { -1 };

int Knapsack(int N, int C, std::vector<int> Value, std::vector<int> Weight) {
	
	// Knapsack using Recursion
	if (N == 0 || C == 0) {
		return 0;
	}
	if (Weight.at(N - 1) > C) {
		return Knapsack(N - 1, C, Value, Weight);
	}
	else if (Weight.at(N - 1) <= C) {
		return std::max(Knapsack(N - 1, C, Value, Weight), Value.at(N - 1) + Knapsack(N - 1, C - Weight.at(N - 1), Value, Weight));
	}

	return 0;

	// Knapsack using Memoization
	/*std::memset(memoize, -1, sizeof(memoize));
	
	if (N == 0 || C == 0) {
		return 0;
	}
	if (memoize[N][C] != -1) {
		return memoize[N][C];
	}
	if (Weight.at(N - 1) > C) {
		return memoize[N][C] = Knapsack(N - 1, C, Value, Weight);
	}
	else if (Weight.at(N - 1) <= C) {
		return memoize[N][C] = std::max(Knapsack(N - 1, C, Value, Weight), Value.at(N - 1) + Knapsack(N - 1, C - Weight.at(N - 1), Value, Weight));
	}

	return 0;*/

	// Knapsack using Top-Down
	/*for (int i = 0; i < N+1; i++) {
		for (int j = 0; j < C+1; j++) {
			if (i == 0 || j == 0) {
				memoize[i][j] = 0;
			}
		}
	}

	for (int i = 1; i < N+1; i++) {
		for (int j = 1; j < C+1; j++) {
			if (Weight.at(i - 1) > j) {
				memoize[i][j] = memoize[i - 1][j];
			}
			else if (Weight.at(i - 1) <= j) {
				memoize[i][j] = std::max(memoize[i-1][j], Value.at(i-1) + memoize[i-1][j-Weight.at(i-1)]);
			}
		}
	}

	return memoize[N][C];*/

}
