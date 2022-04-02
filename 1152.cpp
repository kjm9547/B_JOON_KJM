#include <iostream>
#include <string>
using namespace std;
int main() {
	string word;
	getline(cin,word);
	int stack = 0;
	int startindex = 0;
	int new_index = 0;
	while (true) {
		if (new_index == -1) {
			break;
		}
		new_index= word.find(" ", startindex);
		stack++;
		startindex = new_index + 1;
	}
	cout << stack;
}