//
//  myFileFunctions.cpp
//  LetterShifter2
//
//  Created by Herbert Gilman on 8/17/11.
//  Copyright 2011 Herbert Gilman. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "myFileFunctions.h"

std::string readAllText(std::string sFileName)
{
    using namespace std;
    
    string sReturnText = "";
    
    ifstream inf(sFileName.c_str()); // Try to open the stream.
    
    if (!inf) // If it doesn't work...
    {
        cerr << "File " << sFileName << " could not be opened for reading." << endl;
        exit(1);
    }
    else
    {
        while (inf) // While there is still stuff left to read.
        {
            if (sReturnText != "")
            {
                sReturnText.append("\n"); // Break between lines, but not the first.
            }
            std::string strInput;
            getline(inf, strInput); // Read a line into strInput.
            sReturnText.append(strInput); // Put strInput into sReturnText.
        }
        if (sReturnText != "")
        {
            sReturnText.erase(sReturnText.length() - 1); // Remove the last linebreak.
        }
    }

    return sReturnText;
}

void writeToFile(std::string sFileName, std::string sTextToWrite)
{
    using namespace std;
    
    ofstream outf(sFileName.c_str());
    
    if (!outf)
    {
        cerr << "File " << sFileName << " could not be opened for writing." << endl;
        exit(1);
    }
    
    outf << sTextToWrite << endl;
    
}

bool fileIsWriteable(std::string sFileName)
{
    using namespace std;
    
    ofstream outf(sFileName.c_str());
    
    if (!outf)
    {
        return false;
    }
    else
    {
        return true;
    }
}