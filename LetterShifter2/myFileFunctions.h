//
//  myFileFunctions.h
//  LetterShifter2
//
//  Copyright 2011 Herbert F. Gilman. This work is licensed under the
//  Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License.
//  To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-sa/3.0/ or send a letter to:
//  Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
//

#ifndef LetterShifter2_myFileFunctions_h
#define LetterShifter2_myFileFunctions_h

std::string readAllText(std::string sFileName);
void writeToFile(std::string sFileName, std::string sTextToWrite);
bool fileIsWriteable(std::string sFileName);

#endif
