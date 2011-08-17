//
//  advanceLetter.cpp
//  LetterShifter2
//
//  Created by Herbert Gilman on 8/15/11.
//  Copyright 2011 Herbert Gilman. All rights reserved.
//

#include <string>
#include "advanceLetter.h"

std::string advanceLetter(std::string sOriginal, int nLetters)
{
    std::string lowercase[26];
    lowercase[0] = 'a';
    lowercase[1] = 'b';
    lowercase[2] = 'c';
    lowercase[3] = 'd';
    lowercase[4] = 'e';
    lowercase[5] = 'f';
    lowercase[6] = 'g';
    lowercase[7] = 'h';
    lowercase[8] = 'i';
    lowercase[9] = 'j';
    lowercase[10] = 'k';
    lowercase[11] = 'l';
    lowercase[12] = 'm';
    lowercase[13] = 'n';
    lowercase[14] = 'o';
    lowercase[15] = 'p';
    lowercase[16] = 'q';
    lowercase[17] = 'r';
    lowercase[18] = 's';
    lowercase[19] = 't';
    lowercase[20] = 'u';
    lowercase[21] = 'v';
    lowercase[22] = 'w';
    lowercase[23] = 'x';
    lowercase[24] = 'y';
    lowercase[25] = 'z';
    
    
    std::string uppercase[26];
    uppercase[0] = 'A';
    uppercase[1] = 'B';
    uppercase[2] = 'C';
    uppercase[3] = 'D';
    uppercase[4] = 'E';
    uppercase[5] = 'F';
    uppercase[6] = 'G';
    uppercase[7] = 'H';
    uppercase[8] = 'I';
    uppercase[9] = 'J';
    uppercase[10] = 'K';
    uppercase[11] = 'L';
    uppercase[12] = 'M';
    uppercase[13] = 'N';
    uppercase[14] = 'O';
    uppercase[15] = 'P';
    uppercase[16] = 'Q';
    uppercase[17] = 'R';
    uppercase[18] = 'S';
    uppercase[19] = 'T';
    uppercase[20] = 'U';
    uppercase[21] = 'V';
    uppercase[22] = 'W';
    uppercase[23] = 'X';
    uppercase[24] = 'Y';
    uppercase[25] = 'Z';
    
    for (size_t ooo = 0; ooo < sOriginal.length(); ooo++)
    {
        char cOriginal = sOriginal.c_str()[ooo];
        for (int iii = 0; iii <= 25; iii++)
        {
            if (lowercase[iii].at(0) == cOriginal) // If the lowercase contains it...
            {
                if ((iii + nLetters) > 25) // If it would be forced out of range...
                {
                    sOriginal.replace(ooo, 1, lowercase[((iii + nLetters) - 26)]); // Replace the restarted version.
                }
                else
                {
                    sOriginal.replace(ooo, 1, lowercase[(iii + nLetters)]); // Replace.
                }
            }
            else if (uppercase[iii].at(0) == cOriginal) // If uppercase contains it...
            {
                if ((iii + nLetters) > 25) // If it would be forced out of range...
                {
                    sOriginal.replace(ooo, 1, uppercase[((iii + nLetters) - 26)]); // Replace the restarted version.
                }
                else
                {
                    sOriginal.replace(ooo, 1, uppercase[(iii + nLetters)]); // Replace.
                }
            }
            // Otherwise just don't replace cause it's a symbol or something else.            
        } // Repeat until a hit.
    }
    
    return sOriginal;
}