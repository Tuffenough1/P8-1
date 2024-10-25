#include <iostream>
#include <string>
using namespace std;

int countVowel(string str);


int main(){
	string input;

	cout << "Input string, I guess, if you want to I mean: ";
	cin >> input;

	cout << countVowel(input);
}


int countVowel(string str){
    int vowelCount = 0;
    for (char vow : str){
        vow = tolower(vow);
        if (vow == 'a' || vow == 'e' || vow == 'i' || vow == 'o' || vow == 'u'){
            vowelCount++;
        }
    }
    return vowelCount;
}