#include <iostream>
#include <string>
using namespace std;

int countVowel(string str);


int main(void){
    string input;

    while (true){
        cout << "Enter a string or Q to quit: ";
        cin >> input;

        if (input == "Q") break;
        cout << "Vowel count: " << countVowel(input) << endl;
    }
    return 0;
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