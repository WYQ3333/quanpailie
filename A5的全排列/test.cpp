#include<iostream>
using namespace std;
#include<vector>
#include<string>

class Solution{
public:
	vector<vector<int>> result;

	void PaiLie1(vector<int> data, int begin){
		if (data.size() == begin){
			result.push_back(data);
			return;
		}
		for (int i = begin; i < data.size(); ++i){
			if (i != begin&&data[i] != data[begin])
				continue;
			swap(data[i], data[begin]);
			PaiLie1(data, begin + 1);
			swap(data[i], data[begin]);
		}
	}

	vector<vector<int>> PaiLie(vector<int> data){
		if (data.empty()){
			return result;
		}
		PaiLie1(data, 0);
		return result;
	}

};

void TestFunc(){
	Solution s;
	vector<int> data = { 1, 2, 3, 4, 5 };
	vector<vector<int>> array=s.PaiLie(data);
	int i = 0;
	for (i = 0; i < array.size(); ++i){
		for (int j = 0; j < array[0].size(); ++j){
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
}

int main(){
	TestFunc();
	system("pause");
	return 0;
}