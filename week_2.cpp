// Week 2 Assesment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;

int main()
{
    ifstream file;
    string word;
    map<string, int> map;
    signed int sentences = 0, words = 0;
   
    file.open("input.txt");
    
    
    if (!file.is_open()) cout << "file is not found";
    
    while (file >> word)
    {
        if (word.find('.') + word.find('!') > -1) {
            cout << word << endl;
        }
 
        ++words;
        ++map[word];
    }
    cout << sentences << words << "\n";
    for (auto i : map) cout << i.first << ": " << i.second << "\n";
     
}

