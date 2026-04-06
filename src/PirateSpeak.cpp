#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include "PirateSpeak.h"
using namespace std;

enum Choices {TRANSLATE = 1, ADD, QUIT};
//TODO: Create a function called menu() it will take no parameters
//      and the return type is int.
//      In the function prompt the user to choose 1 of three menus. Translate, Add to
//      Dictionary, or Quit.
int menu(){
  int choice;
  cout << "Choose an option: " << endl;
  cout << "1) Translate a word" << endl;
  cout << "2) Add to Dictionary" << endl;
  cout << "3) Quit" << endl;
  cout << "Enter your choice: ";
  cin >> choice;
  return choice;
}

//TODO: Create the addWord() function. It takes no parameters and the return type
//      is void.
//      1) create a Pirate object
//      2) prompt the user to enter a word in english
//      3) prompt the user to enter the pirate translation
//      4) call the object function called addToFile and pass both words as parameters

void addWord() {
    Pirate p;
    string englishWord, pirateWord;
	cout << "Enter an English word: ";
	cin >> englishWord;
	cout << "Enter the Pirate translation: ";
	cin >> pirateWord;

	p.addToFile(englishWord, pirateWord);
}

//TODO: Create the translate() function. It takes no parameters and the return type is void
//      1) create a Pirate object
//      2) prompt the user to enter a word
//      3) call the object function called translateWord and pass the word as a parameter

void translate() {
    Pirate p;
    string englishWord;
    cout << "Enter a word to translate: ";
    cin >> englishWord;
    string translation = p.translateWord(englishWord);
    cout << "Pirate says: " << translation << endl;
}



int main() {
  int choice;
  do{
    choice = menu();
    switch(choice){
      case TRANSLATE:
        translate();
        break;
      case ADD:
        addWord();
        break;   
    }
  }while(choice != QUIT);

  return 0;
}