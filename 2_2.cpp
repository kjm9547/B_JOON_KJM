#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int num;
	cin >> num;

	for (int i = ceil(num / 2); i >=0; i--) {
		for (int j = 1; j <=num; j++) {
			if(num-i>j&&j>num-j)
				cout << ' ';
			if(ceil(num / 2)==j&&)
			else {
				cout << '*';
			}
			
		}
		cout << '\n';
		
	}

	
}