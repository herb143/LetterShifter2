//
//  myFileFunctions.h
//  LetterShifter2
//
//  Created by Herbert Gilman on 8/17/11.
//  Copyright 2011 Herbert Gilman. All rights reserved.
//

#ifndef LetterShifter2_myFileFunctions_h
#define LetterShifter2_myFileFunctions_h

std::string readAllText(std::string sFileName);
void writeToFile(std::string sFileName, std::string sTextToWrite);
bool fileIsWriteable(std::string sFileName);

#endif
