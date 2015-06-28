#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// method prototypes
string runeReplace(char current);
string runCheck(char current, char next);

/**
* Auto-generated code below aims at helping you parse
* the standard input according to the problem statement.
**/
int main()
{
    string magicPhrase, finalString;
    getline(cin, magicPhrase);

    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    int lengthOfString;
    //

    lengthOfString = magicPhrase.length();
    char characters[lengthOfString];
    magicPhrase.copy(characters, lengthOfString);

    for (int n = 0; n < lengthOfString; n++)
    {
        if (isalpha(characters[n]))
        {
            char current = characters[n];
            char next = characters[n + 1];

            if (current == next)
            {
                finalString = finalString + ".";
                cerr << "current: " << current << " next: " << next << endl;
                n++;
                continue;
            }

            else
            {
                finalString = finalString + runeReplace(current);
                cerr << finalString << endl;
                n++;
                continue;
            }

        }
        //else
        //{
        //    finalString = finalString + ">.";
        //}

    }


    cout << finalString << endl;
}

// converts string to replacement run letters and returns string
string runeReplace(char current)
{
    string returnString;
    string ltrA = "+";
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

    char alphabet[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
    string conversions[] = { ltrA, ltrB, ltrC, ltrD, ltrE, ltrF, ltrG, ltrH, ltrI, ltrJ, ltrK, ltrL, ltrM, ltrN, ltrO, ltrP, ltrQ, ltrR, ltrS, ltrT, ltrU, ltrV, ltrW, ltrX, ltrY, ltrZ };

    for (int n = 0; n < 26; n++)
    {
        if (current == alphabet[n])
        {
            cerr << "We got a match!" << endl;
            cerr << "My letter is " << alphabet[n] << endl;
            returnString = returnString + conversions[n] + ".>";
            n++;
            continue;
        }

        else
        {
            n++;
            continue;
        }

    }

    //returnString = returnString + ">";
    return returnString;
}

string runCheck(char current, char next)
{
    string returnString;

    if (current == next)
    {
        returnString = ".";
    }
    else
    {
        returnString = " ";
    }

    return returnString;
}