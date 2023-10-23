// max's assesmeant task, 12.10.23

#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;


int main()
{
    //inits variables.
    ifstream file;
    string word;
    map<string, int> map;
    signed int sentences = 0, words = 0;

    //uses fstream lib to open file.
    file.open("input.txt");

    //checks if file is in current directory.
    if (!file.is_open()) cout << "file is not found";

    // iterates through stream and 'reads' each text to a space until eof is triggered.
    while (file >> word)
    {
        //checks if index sum is less than 99, incorrect way to deal with overflow.
        if (word.find('.') + word.find('!') < 99) ++sentences;
        
        //adds one to the words count
        ++words;
        //adds one to the value of the key in the map.
        ++map[word];
    }
    //prints counts and the map
    cout << "number of sentences is " << sentences << endl;
    cout << "number of words is " << words << endl;
    for (auto i : map) cout << i.first << ": " << i.second << "\n";

}
