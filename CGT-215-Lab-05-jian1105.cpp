#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	vector<char> conv_vector = 
		{'V', 'F', 'X', 'B', 'L', 'I', 'T', 'Z', 'J', 'R', 'P', 'H', 'D', 'K', 'N', 'O', 'W', 'S', 'G', 'U', 'Y', 'Q', 'M', 'A', 'C', 'E'};

	string input;

	cout << "Input text to cypher: ";
	
	getline(cin, input);

	cout << "Encoded Message: \"";
	for (int i = 0; i < input.length(); i++) {
		int ascii = int(input[i]);

		if (ascii >= 65 && ascii <= 90) {
			cout << conv_vector[ascii - 65];
		}
		else if (ascii >= 97 && ascii <= 122) {
			// im too lazy to write two lines
			cout << char(32 + int(conv_vector[ascii - 97]));
		}
		else {
			cout << input[i];
		}
	}
	cout << "\"";
}