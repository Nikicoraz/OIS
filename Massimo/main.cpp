#include <vector>

using namespace std;

int trova_massimo(int N, vector<int> V){
	int max = V.at(0);
	for(int i = 1; i < N; i++){
		if(V.at(i) > max){
			max = V.at(i);
		}
	}

	return max;
}
