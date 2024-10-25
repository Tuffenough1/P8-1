#include <iostream>
#include <string>
using namespace std;

int countCharacter(string str);


int main(){
	string input;

	cout << "Input string, I guess, if you want to I mean: ";
	cin >> input;

	cout << countCharacter(input);
}


int countCharacter(string str){
	return str.length();
}