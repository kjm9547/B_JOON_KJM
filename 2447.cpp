#include <iostream>

using namespace std;

int main() {
	int num = 0;
	cin >> num;
	int rec_x,rec_y;
	rec_x = num / 3;
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (j % 3 == 1 && i % 3 == 1) {
				cout << ' ';
			}
		
			if ((i/3)%3==1&&(j/3)%3==1) {
				cout << ' ';
			}
			
			else {
			
				cout << '*';
				
				}
			
		}
		cout << '\n';
	}
}