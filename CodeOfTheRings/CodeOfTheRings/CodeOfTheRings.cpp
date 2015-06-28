#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// method prototypes
string runeReplace(char current);
string runCheck(char current, char next);
bool IsVowel(char arr[], char current);
bool seenBefore(char arr[], char current);

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

    lengthOfString = magicPhrase.length();
    char characters[lengthOfString];
    magicPhrase.copy(characters, lengthOfString);
    char vowel[] = { 'A', 'E', 'I', 'O', 'U' };

    for (int n = 0; n < lengthOfString; n++)
    {
        char current = characters[n];
        char next = characters[n + 1];


        if (next != current)
        {
            cerr << "Current character vowel? " << IsVowel(vowel, current) << endl;
            finalString = finalString + runeReplace(current);
            cerr << "Final String is " << finalString << endl;
        }

        else if (next == current)
        {
            cerr << "Next equals current!" << endl;
            finalString = finalString + ".";
        }

    }

    cout << finalString << endl;
}

// converts string to replacement run letters and returns string
string runeReplace(char current)
{
    cerr << "runeReplace just received the char " << current << endl;
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
    char created[30];
    int createdCount = 0;

    for (int k = 0; k < 26; k++)
    {
        if (current == alphabet[k])
        {
            cerr << "We got a match!" << endl;
            cerr << "My letter is " << alphabet[k] << endl;
            created[createdCount] = { alphabet[k] };
            cerr << "This was added to the created array " << created[createdCount] << endl;
            createdCount++;
            returnString = returnString + conversions[k] + ".>";
            continue;
        }

        else
        {
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



bool IsVowel(char arr[], char current)
{
    //char vowel[] = {'A', 'E', 'I', 'O', 'U'};
    char* end = arr + sizeof(arr) / sizeof(arr[0]);
    char* position = std::find(arr, end, current);

    return (position != end);
}
