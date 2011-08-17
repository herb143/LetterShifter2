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
#include "advanceLetter.h" // The advance function.
#include "retractLetter.h" // The retract function.

int main (int argc, const char * argv[])
{
    using namespace std;
    
    string sOriginalText = "";
    
    if (argc >= 2) // If there's enough arguments...
    {
        ifstream inf(argv[1]); // Try to open the stream.
        
        if (!inf) // If it doesn't work...
        {
            cerr << "File " << argv[1] << " could not be opened for reading." << endl;
            exit(1);
        }
        else
        {
            while (inf) // While there is still stuff left to read.
    	    {
                if (sOriginalText != "")
                {
                    sOriginalText.append("\n"); // Break between lines, but not the first.
                }
                std::string strInput;
                getline(inf, strInput); // Read a line into strInput.
                sOriginalText.append(strInput); // Put strInput into sOriginalText.
            }
            if (sOriginalText != "")
            {
                sOriginalText.erase(sOriginalText.length() - 1); // Remove the last linebreak.
            }
        }
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

