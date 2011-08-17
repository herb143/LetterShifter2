//
//  myStringFunctions.cpp
//  LetterShifter2
//
//  Created by Herbert Gilman on 8/17/11.
//  Copyright 2011 Herbert Gilman. All rights reserved.
//

#include <iostream>
#include "myStringFunctions.h"


int stringToNumber(const char * sInputString)
{
    
    if (!strcmp("1", sInputString)) { return 1; } // Run through the possibilities.
    else if (!strcmp("2", sInputString)) { return 2; }
    else if (!strcmp("3", sInputString)) { return 3; }
    else if (!strcmp("4", sInputString)) { return 4; }
    else if (!strcmp("5", sInputString)) { return 5; }
    else if (!strcmp("6", sInputString)) { return 6; }
    else if (!strcmp("7", sInputString)) { return 7; }
    else if (!strcmp("8", sInputString)) { return 8; }
    else if (!strcmp("9", sInputString)) { return 9; }
    else if (!strcmp("10", sInputString)) { return 10; }
    else if (!strcmp("11", sInputString)) { return 11; }
    else if (!strcmp("12", sInputString)) { return 12; }
    else if (!strcmp("13", sInputString)) { return 13; }
    else if (!strcmp("14", sInputString)) { return 14; }
    else if (!strcmp("15", sInputString)) { return 15; }
    else if (!strcmp("16", sInputString)) { return 16; }
    else if (!strcmp("17", sInputString)) { return 17; }
    else if (!strcmp("18", sInputString)) { return 18; }
    else if (!strcmp("19", sInputString)) { return 19; }
    else if (!strcmp("20", sInputString)) { return 20; }
    else if (!strcmp("21", sInputString)) { return 21; }
    else if (!strcmp("22", sInputString)) { return 22; }
    else if (!strcmp("23", sInputString)) { return 23; }
    else if (!strcmp("24", sInputString)) { return 24; }
    else if (!strcmp("25", sInputString)) { return 25; }
    else if (!strcmp("-1", sInputString)) { return -1; }
    else if (!strcmp("-2", sInputString)) { return -2; }
    else if (!strcmp("-3", sInputString)) { return -3; }
    else if (!strcmp("-4", sInputString)) { return -4; }
    else if (!strcmp("-5", sInputString)) { return -5; }
    else if (!strcmp("-6", sInputString)) { return -6; }
    else if (!strcmp("-7", sInputString)) { return -7; }
    else if (!strcmp("-8", sInputString)) { return -8; }
    else if (!strcmp("-9", sInputString)) { return -9; }
    else if (!strcmp("-10", sInputString)) { return -10; }
    else if (!strcmp("-11", sInputString)) { return -11; }
    else if (!strcmp("-12", sInputString)) { return -12; }
    else if (!strcmp("-13", sInputString)) { return -13; }
    else if (!strcmp("-14", sInputString)) { return -14; }
    else if (!strcmp("-15", sInputString)) { return -15; }
    else if (!strcmp("-16", sInputString)) { return -16; }
    else if (!strcmp("-17", sInputString)) { return -17; }
    else if (!strcmp("-18", sInputString)) { return -18; }
    else if (!strcmp("-19", sInputString)) { return -19; }
    else if (!strcmp("-20", sInputString)) { return -20; }
    else if (!strcmp("-21", sInputString)) { return -21; }
    else if (!strcmp("-22", sInputString)) { return -22; }
    else if (!strcmp("-23", sInputString)) { return -23; }
    else if (!strcmp("-24", sInputString)) { return -24; }
    else if (!strcmp("-25", sInputString)) { return -25; }
    else { return NULL; } // It was out of range or invalid.
    
}