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
#include "advanceLetter.h" // The advance function.
#include "retractLetter.h" // The retract function.


int main (int argc, const char * argv[])
{
    using namespace std;
    
    string sOriginalText = "";
    
    
    if (argc >= 2) // If there's enough arguments...
    {

    }
    else // If nothing was specified...
    {
        cerr << "Please specify a file to use as input." << endl;
        exit(1);
    }
    
    cout << "Original Text:\n" << sOriginalText << endl;
    
    /*
    
    
    string sOriginalText = "";
    cout << "Enter the original text." << endl;
    cin >> sOriginalText;
    
     */
     
    cout << "Enter how many spaces you would like to shift." << endl;
    int nSpaces = 0;
    cin >> nSpaces;
    
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

