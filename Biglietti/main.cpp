#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream iFile("input.txt");
	ofstream oFile("output.txt");

	int N, M, A, B;
	iFile >> N >> M >> A >> B;

	int comprate = 0, costo = 0;
	while(comprate < N){
		if(M * A < B && comprate + M < N){
			comprate += M;
			costo += M * A;
		}else if(M * A >= B && comprate + M < N){
			comprate += M;
			costo += B;
		}else{
			if((N - comprate) * A > B){
				costo += B;
			}else{
				costo += (N - comprate) * A;
			}
			comprate = N;
		}
	}

	oFile << costo;
}
