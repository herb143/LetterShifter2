//
//  main.cpp
//  LetterShifter2
//
//  Copyright 2011 Herbert F. Gilman. This work is licensed under the
//  Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License.
//  To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-sa/3.0/ or send a letter to:
//  Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
//

#include <iostream>
#include <fstream>
#include "myFileFunctions.h" // The file functions.
#include "myStringFunctions.h" // The string functions.
#include "advanceLetter.h" // The advance function.
#include "retractLetter.h" // The retract function.


int main (int argc, const char * argv[])
{
    using namespace std;
    
    // Begin version function.
    for (int iii = 1; iii < argc; iii++)
    {
        if (!(strcmp(argv[iii], "-v")))
        {
            cout << endl;
            cout << "LetterShifter2 v1.0" << endl;
            cout << "Copyright 2011 Herbert F. Gilman. This software is licensed under the" << endl;
            cout << "Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License." << endl;
            cout << "See the README for more information." << endl;
            cout << endl;
            return 0;
            
        }
        else if (!(strcmp(argv[iii], "--version")))
        {
            cout << endl;
            cout << "LetterShifter2 v1.0" << endl;
            cout << "Copyright 2011 Herbert F. Gilman. This software is licensed under the" << endl;
            cout << "Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License." << endl;
            cout << "See the README for more information." << endl;
            cout << endl;
            return 0;
        }
    }
    
    
    string sOriginalText = ""; // Define the variables.
    int nSpaces = 0;
    string fileToWrite = "";
    bool writingFile = false; // By default, don't write to file.
    
    
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
    else if (argc == 3) // If there were 2 arguments (hopefully the number of spaces and the input file)
    {
        int nPossibleSpaces = stringToNumber(argv[1]);
        if (nPossibleSpaces) // If stringToNumber doesn't return null...
        {
            
            nSpaces = nPossibleSpaces; // Set the spaces variable.
            
            string argument;
            argument.append(argv[2]);
            
            sOriginalText = readAllText(argument); // If this fails it will exit by itself.
            
        }
        else // If it did return null...
        {
            cerr << "Shift must be between 1 - 25 and -25 - -1." << endl; // Error out.
            exit(1);
        }
    }
    else if (argc == 4) // If there were 3 arguments (hopefully the number of spaces and the input file)
    {
        
        int nPossibleSpaces = stringToNumber(argv[1]);
        if (nPossibleSpaces) // If stringToNumber doesn't return null...
        {
            
            nSpaces = nPossibleSpaces; // Set the spaces variable.
            
            string argument;
            argument.append(argv[2]);
            
            sOriginalText = readAllText(argument); // If this fails it will exit by itself.
            
            string argumentWrite;
            argumentWrite.append(argv[3]);
            
            if (fileIsWriteable(argumentWrite)) // If the file to be written is valid...
            {
                fileToWrite = argumentWrite; // Set the filename variable.
                writingFile = true; // Set the writingfile variable.
            }
            else // If the file to be written is invalid...
            {
                cerr << "File " << argumentWrite << " could not be opened for writing." << endl;
                exit(1);
            }
            
            
        }
        else // If it did return null...
        {
            cerr << "Shift must be between 1 - 25 and -25 - -1." << endl; // Error out.
            exit(1);
        }

        
        
    }
    else // If there are more than 3 arguments...
    {
        cerr << "Too many arguments!" << endl;
        exit(1);
    }
    
    string sNewText = shiftText(nSpaces, sOriginalText); // Shift the text...
    
    if (!writingFile) // If we're just writing to standard output...
    {
    cout << "New Text:\n-----------------------------------\n" << sNewText << endl;
    }
    else // If we're writing to a file...
    {
        writeToFile(fileToWrite, sNewText); // If this fails it will exit by itself.
        cout << "Output written to " << fileToWrite << "." << endl;
    }
    
    return 0;
}

