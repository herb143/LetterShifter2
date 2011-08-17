//
//  main.cpp
//  LetterShifter2
//
//  Created by Herbert Gilman on 8/13/11.
//  Copyright 2011 Herbert Gilman. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include "myFileFunctions.h" // The file functions.
#include "myStringFunctions.h" // The string functions.
#include "advanceLetter.h" // The advance function.
#include "retractLetter.h" // The retract function.


int main (int argc, const char * argv[])
{
    using namespace std;
    
    string sOriginalText = ""; // Define the variables.
    int nSpaces = 0;
    
    
    if (argc < 2) // If there's not enough arguments for anything take it manually.
    {
        
        cout << "Enter how many spaces you would like to shift." << endl;
        cin >> nSpaces;   
        
        cout << "Enter the original text." << endl;
        cin >> sOriginalText;
    }
    else if (argc == 2) // If there was only one argument (hopefully the number of spaces...)
    {
        int nPossibleSpaces = stringToNumber(argv[1]);
        if (nPossibleSpaces) // If stringToNumber doesn't return null...
        {
            nSpaces = nPossibleSpaces;
            cout << "Enter the original text." << endl;
            cin >> sOriginalText;
            
        }
        else // If it did return null...
        {
            cerr << "Shift must be between 1 - 25 and -25 - -1." << endl; // Error out.
            exit(1);
        }
    }
    else // If nothing was specified...
    {
    }
    
    cout << "Original Text:\n" << sOriginalText << endl;
    
    
    string sNewText = "";
    
    if (nSpaces < 0)
    {
        sNewText = retractLetter(sOriginalText, nSpaces * -1);
    }
    else if (nSpaces > 0)
    {
        sNewText = advanceLetter(sOriginalText, nSpaces);
    }
    else
    {
        sNewText = sOriginalText;
    }
    
    cout << "New Text:\n" << sNewText << endl;
    
    
    return 0;
}

