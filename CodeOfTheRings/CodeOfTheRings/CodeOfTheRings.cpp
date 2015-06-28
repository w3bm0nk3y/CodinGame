#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
* Auto-generated code below aims at helping you parse
* the standard input according to the problem statement.
**/

// method prototypes
string runeReplace(string theString);
string runeMove(int currentPosition, int runePosition);

// global constants
int const MIN_LENGTH = 1;
int const MAX_LENGTH = 500;
string ltrA = "+"; //
string ltrB = ltrA + ltrA;
string ltrC = ltrB + ltrA;
string ltrD = ltrC + ltrA;
string ltrE = ltrD + ltrA;
string ltrF = ltrE + ltrA;
string ltrG = ltrF + ltrA;
string ltrH = ltrG + ltrA;
string ltrI = ltrH + ltrA;
string ltrJ = ltrI + ltrA;
string ltrK = ltrJ + ltrA;
string ltrL = ltrK + ltrA;
string ltrM = ltrL + ltrA;
string ltrZ = "-";
string ltrY = ltrZ + ltrZ;
string ltrX = ltrY + ltrZ;
string ltrW = ltrX + ltrZ;
string ltrV = ltrW + ltrZ;
string ltrU = ltrV + ltrZ;
string ltrT = ltrU + ltrZ;
string ltrS = ltrT + ltrZ;
string ltrR = ltrS + ltrZ;
string ltrQ = ltrR + ltrZ;
string ltrP = ltrQ + ltrZ;
string ltrO = ltrP + ltrZ;
string ltrN = ltrO + ltrZ;
string moveOn = ">";
string moveBack = "<";
string commitRune = ".";

int main()
{
    


    int* varArray[] = { &c1, &c2, &c3 };
    int size = sizeof(varArray) / sizeof(int*);

    for (int i = 0; i < size; ++i)
    {
        std::cout << "This variable c" << i + 1 << " = " << *varArray[i] << std::endl;
    }


    
    
    
    //string magicPhrase;
    //getline(cin, magicPhrase);
    string magicPhrase = "AZ";
    int currentPosition = 0;
    int runePosition = 0;

    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    //cerr << magicPhrase << endl;
    //cerr << magicPhrase.length() << endl;
    //cout << magicPhrase << endl;
    cout << magicPhrase.length() << endl;

    for (int n = 0; n < magicPhrase.length(); n++)
    {
        cout << runeMove(currentPosition, runePosition) << endl;
        cout << runeReplace(magicPhrase) << endl;
    }

}


// outputs move characters based on position difference
string runeMove(int currentPosition, int runePosition)
{
    string moveString;
    int difference;
    difference = currentPosition - runePosition;
    //letterPosition = runePosition;

    if (difference < 0)
    {
        for (int n = 0; n < abs(difference); n++)
        {
            moveString = moveString + moveOn;
        }
    }

    else if (difference > 0)
    {
        for (int n = 0; n < abs(difference); n++)
        {
            moveString = moveString + moveBack;
        }
    }

    else
    {
        moveString = commitRune;
    }

    return moveString;
}

// converts string to replacement run letters and returns string
string runeReplace(string theString)
{
    string returnString, currentLetter;
    int length = theString.length();

    for (int n = 0; n < length; n++)
    {
        if (isalpha(theString[n]))
        {
            if (theString[n] == 'A')
            {
                returnString = returnString + ltrA + commitRune + moveOn;
                cerr << returnString << endl;
                continue;
            }

            else if (theString[n] == 'B')
            {
                returnString = returnString + ltrB + commitRune + moveOn;
                cerr << returnString << endl;
                continue;
            }

            else if (theString[n] == 'C')
            {
                returnString = returnString + ltrC + commitRune + moveOn;
                cerr << returnString << endl;
                continue;
            }

            else if (theString[n] == 'D')
            {
                returnString = returnString + ltrD + commitRune + moveOn;
                cerr << returnString << endl;
                continue;
            }

            else if (theString[n] == 'E')
            {
                returnString = returnString + ltrE + commitRune + moveOn;
                cerr << returnString << endl;
                continue;
            }

            else if (theString[n] == 'F')
            {
                returnString = returnString + ltrF + commitRune + moveOn;
                cerr << returnString << endl;
                continue;
            }

            else if (theString[n] == 'G')
            {
                returnString = returnString + ltrG + commitRune + moveOn;
                cerr << returnString << endl;
                continue;
            }

            else if (theString[n] == 'H')
            {
                returnString = returnString + ltrH + commitRune + moveOn;
                cerr << returnString << endl;
                continue;
            }

            else if (theString[n] == 'I')
            {
                returnString = returnString + ltrI + commitRune + moveOn;
                cerr << returnString << endl;
                continue;
            }

            else if (theString[n] == 'J')
            {
                returnString = returnString + ltrJ + commitRune + moveOn;
                cerr << returnString << endl;
                continue;
            }

            else if (theString[n] == 'K')
            {
                returnString = returnString + ltrK + commitRune + moveOn;
                cerr << returnString << endl;
                continue;
            }

            else if (theString[n] == 'L')
            {
                returnString = returnString + ltrL + commitRune + moveOn;
                cerr << returnString << endl;
                continue;
            }

            else if (theString[n] == 'M')
            {
                returnString = returnString + ltrM + commitRune + moveOn;
                cerr << returnString << endl;
                continue;
            }

            else if (theString[n] == 'N')
            {
                returnString = returnString + ltrN + commitRune + moveOn;
                cerr << returnString << endl;
                continue;
            }

            else if (theString[n] == 'O')
            {
                returnString = returnString + ltrO + commitRune + moveOn;
                cerr << returnString << endl;
                continue;
            }

            else if (theString[n] == 'P')
            {
                returnString = returnString + ltrP + commitRune + moveOn;
                cerr << returnString << endl;
                continue;
            }

            else if (theString[n] == 'Q')
            {
                returnString = returnString + ltrQ + commitRune + moveOn;
                cerr << returnString << endl;
                continue;
            }

            else if (theString[n] == 'R')
            {
                returnString = returnString + ltrR + commitRune + moveOn;
                cerr << returnString << endl;
                continue;
            }

            else if (theString[n] == 'S')
            {
                returnString = returnString + ltrS + commitRune + moveOn;
                cerr << returnString << endl;
                continue;
            }

            else if (theString[n] == 'T')
            {
                returnString = returnString + ltrT + commitRune + moveOn;
                cerr << returnString << endl;
                continue;
            }

            else if (theString[n] == 'U')
            {
                returnString = returnString + ltrU + commitRune + moveOn;
                cerr << returnString << endl;
                continue;
            }

            else if (theString[n] == 'V')
            {
                returnString = returnString + ltrV + commitRune + moveOn;
                cerr << returnString << endl;
                continue;
            }

            else if (theString[n] == 'X')
            {
                returnString = returnString + ltrX + commitRune + moveOn;
                cerr << returnString << endl;
                continue;
            }

            else if (theString[n] == 'Y')
            {
                returnString = returnString + ltrY + commitRune + moveOn;
                cerr << returnString << endl;
                continue;
            }

            else if (theString[n] == 'Z')
            {
                returnString = returnString + ltrZ + commitRune + moveOn;
                cerr << returnString << endl;
                continue;
            }

            else
            {
                continue;
            }
        }

        else
        {
            returnString = returnString + commitRune + moveOn;
            cerr << "We have a space" << endl;
            cerr << returnString << endl;
            continue;
        }
    }

    return returnString;
}