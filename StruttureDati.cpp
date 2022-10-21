#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <string>

using namespace std;

void PrintQueue(queue<int> q){
	while(!q.empty()){
		cout << q.front() << endl;
		q.pop();
	}
}

int main(){
	// Tipi in c++ utili: short int long long long unsigned long long 
	cout << "Bella a tutti ragazzi e benvenuti in questo nuovo tutorial!" << endl;
	vector<int> v;
	queue<int> q;
	stack<int> s;
	priority_queue<int> pq;
	set<int>  se;
	set<int>::iterator sei;
	map<int, string> ma;
	pair<int, float> coppia;
	
	ifstream iFile("input.txt");
	ofstream oFile("output.txt");

	int temp;
	for(int i = 0; i < 11; i++){
		iFile >> temp;
//		v.push_back(temp);
//		q.push(temp);
//		s.push(temp);
//		pq.push(temp);
//		se.insert(temp);
// 		ma.insert({1, "ciao"});
	}

//	coppia.first = 12;
//	coppia.second = 13;
	
//	for(sei = se.begin(); sei != se.end(); sei++){
//		cout << *sei << endl;
//	}
	

//	PrintQueue(q);

//	while(!pq.empty()){
//		cout << pq.top() << endl;
//		pq.pop();
//	}

//	while(!s.empty()){
//		cout << s.top() << endl;
//		s.pop();
//	}
	
//	while(!q.empty()){
//		cout << q.front() << endl;
//		q.pop();
//	}
//
//	oFile << output;

	return 0;
}
