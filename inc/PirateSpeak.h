#ifndef PIRATESPEAK_H
#define PIRATESPEAK_H

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

class Pirate {
    public:
        string translateWord(string word){
            //TODO: Enter the path to the text file in the double quotes
            ifstream fin("pirate.csv", ios::in);
            string english, pirate;

            //TODO: The way that an ifstream works is that it reads everything in the 
            //      csv file. 
            //      1) Create a while loop that does not terminate until the file
            //         has been read fully
            //      2) using getline(), read the english word
            //      3) using getline(), read the pirate word
            //      4) if the english word equals the word that is being passed,
            //         then close the file and return the pirate word
            //      5) otherwise, close the file and just return the word being passed
            while (getline(fin, english, ',') && getline(fin, pirate)){
                if (english == word){
                    fin.close();
                    return pirate;
                }
            }
            fin.close();
            return word;
        }

        void addToFile(string english, string pirate){
            //TODO: append the passed words to the csv file and close the file
            //      remember to delimit the words with a comma
				ofstream fout("pirate.csv", ios::app);
				fout << english << "," << pirate << endl;
				fout.close();
        }
};
#endif
