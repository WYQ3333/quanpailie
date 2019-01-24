#include<iostream>
using namespace std;
#include<vector>
#include<string>

class Solution{
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
	}

};

void TestFunc(){

}

int main(){
	TestFunc();
	system("pause");
	return 0;
}