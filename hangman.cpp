 #include <iostream>

using namespace std;

int main()
{
	string words[4] = {"Regen", "Blitz", "Tornado", "Sturm"};
	string guessedLetters = "";
	int falseLeft = 5;
	string input;

	int amountOfWords = sizeof(words) / sizeof(words[0]); // 160 Bytes / 40 Bytes pro String = 4 x 40 bytes = 160bytes) | string = 40 bytes
	string randomWord = words[rand() % amountOfWords];	  // rand(); = random number 0 - 32767

	string* word = new string[randomWord.size()]; // * pointer to dynamic string array in RAM


	cout << randomWord;
	return 0;
}
