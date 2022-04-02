#include <iostream>
#include <string>

using namespace std;
int main() {
	char word[1000000];
	cin.getline(word,1000000);
	int len = strlen(word);
	int count[26]={};
	char out_word[26] = {};
	int max = 0;
	char text = ' ';
	int j = 0;
	for (int i = 0; i < len; i++) {
		for (char alpha = 'a'; alpha < 'z'; alpha++) {
			if (alpha == word[i]) {
				count[alpha-97]+=1;
				out_word[alpha - 97] = alpha;
			}
			
		}
	}
	
	for (int i = 0; i < 26; i++) {
		if (max < count[i]) {
			max = count[i];
			text = out_word[i];
		}
		
	}

	for (int i = 0; i < 26; i++) {
		
			if (max == count[i]) {
				j++;
			}
			
		
	}
	if (j >= 2) {
		cout << "?";
	}
	else
	{
		cout << text;
	}
	
}