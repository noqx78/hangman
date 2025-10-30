#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main()
{
	string words[4] = { "Regen", "Blitz", "Tornado", "Sturm" }; // ! problem: always returns blitz
	string guessedLetters = "";
	bool answer;
	int falseInputs;
	//char input;

	int amountOfWords = sizeof(words) / sizeof(words[0]); // 160 Bytes / 40 Bytes pro String = 4 x 40 bytes = 160bytes) | string = 40 bytesdh.
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
		char input;
		for (int i = 0; i < randomWord.size(); i++) {
			cout << UserGuesses[i];
		}
		cout << endl;
		cout << "Input: ";
		cin >> input;

		for (int i = 0; i < randomWord.size(); i++) {

			if ((tolower(wordArray[i][0])) == (tolower(input))) { 
				UserGuesses[i] = wordArray[i];						  
			}
			system("cls");
			/*
			for (int i = 0; i < n - 1; i++)
			{
				if (array[i] != array[i + 1])
					flag = 1;
			}
			*/
		}
		
	}
	return 0;
} 
