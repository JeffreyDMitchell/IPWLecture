#include <stdio.h>
#include "functions_to_implement.cpp"

using namespace std;

std::string boolVecToString(vector<bool> in)
{

	string ret = "";

	for(size_t i = 0; i < in.size(); i++)
	{
		ret += (in[i] ? "True" : "False");
		ret += " ";
	}

	return ret;

}

int main()
{

	int num_set[] = {1,2,3,4,5};
	string word_set[] = {"This",  "is",  "a",  "test"};

	vector<string> word_vec;

	for(size_t i = 0; i < 4; i++)
		word_vec.push_back(word_set[i]);

	cout << "Testing Join function: " << endl;

	cout << Join(word_vec, "hehe") << endl;


	vector<int> nums(num_set, num_set + 5);

	cout << "Testing OddMask and EvenMask functions: " << endl << "Inputs: " << endl;

	for(size_t i = 0; i < nums.size(); i++)
		cout << nums[i];
	
	cout << endl;

	vector<bool> odds = OddMask(nums);
	vector<bool> evens = EvenMask(nums);

	cout << boolVecToString(odds) << endl << boolVecToString(evens) << endl;
}