#include <iostream>

using namespace std;

int main()
{
	string words[4] = { "Regen", "Blitz", "Tornado", "Sturm" }; // ! problem: always returns blitz
	string guessedLetters = "";
	int falseInputs;
	string input;

	int amountOfWords = sizeof(words) / sizeof(words[0]); // 160 Bytes / 40 Bytes pro String = 4 x 40 bytes = 160bytes) | string = 40 bytes
	string randomWord = words[rand() % amountOfWords];	  // rand(); = random number 0 - 32767

	string* wordArray = new string[randomWord.size()]; // * pointer to dynamic string array in RAM & 
	string* UserGuesses = new string[randomWord.size()];

	cout << randomWord << endl;

	for (int i = 0; i < randomWord.size(); i++) { // move characters from string to dynamic array
		wordArray[i] = randomWord[i];
		UserGuesses[i] = "_";

	}
	while (true)
	{
		for (int i = 0; i < randomWord.size(); i++) {
			cout << UserGuesses[i];
		}
		cout << endl;
		cout << "Input: ";
		cin >> input;

		for (int i = 0; i < randomWord.size(); i++) {

			if (wordArray[i] == ) { // todo: to lower func & toUpper
				UserGuesses[i] = input;
			}
			system("cls");

			if (wordArray[i] == UserGuesses[i]) { // exit loop
				break;
			}

		}
		
	}

	return 0;
} 
