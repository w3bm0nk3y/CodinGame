// -------------- SOURCE FILE OF ASSIGNMENT ----------
#include <iostream>
#include <string>
using namespace std;

// method prototypes
string getString();
string convertToUpper(string theString);
string convertToLower(string theString);
int countVowels(string theString);
int countConsonants(string theString);
string reverseStr(string theString);

// global constants
int const MIN_LENGTH = 4;
int const MAX_LENGTH = 24;

int main()
{
    string theString;

    theString = getString();
    cout << "\nUPPER CASED: " << convertToUpper(theString) << endl;
    cout << "\nlower cased: " << convertToLower(theString) << endl;
    cout << "\nNumber of Vowels: " << countVowels(theString) << endl;
    cout << "\nNumber of Consonants: " << countConsonants(theString) << endl;
    cout << "\nIn reverse: " << reverseStr(theString) << endl << endl;
}

// gets input, computes and returns answer
string getString()
{
    string prompt, userInput;

    while (true)
    {
        // get phrase or sentence
        prompt = "Please enter a phrase or sentence: ";
        cout << prompt;
        getline(cin, userInput);

        // test for reasonable length
        if (userInput.length() < MIN_LENGTH || userInput.length() > MAX_LENGTH)
        {
            cout << "\nPassword must be between " << MIN_LENGTH << " and ";
            cout << MAX_LENGTH << " characters.\n\n";
            continue;
        }

        else
        {
            // user entered a string of reasonable length
            break;
        }

    }
    return userInput;
}

// converts string to upper case and returns uppercase
string convertToUpper(string theString)
{
    int length = theString.length();

    for (int n = 0; n < length; n++)
        theString[n] = toupper(theString[n]);

    return theString;
}

// converts string to lower case and returns lowercase
string convertToLower(string theString)
{
    int length = theString.length();

    for (int n = 0; n < length; n++)
        theString[n] = tolower(theString[n]);

    return theString;
}

// counts vowels and returns vowel count
int countVowels(string theString)
{
    int countVowels = 0;
    int length = theString.length();

    for (int n = 0; n < length; n++)
    {
        if (isalpha(theString[n]))
        {
            if (tolower(theString[n]) == 'a' || tolower(theString[n]) == 'e' ||
                tolower(theString[n]) == 'i' || tolower(theString[n]) == 'o' ||
                tolower(theString[n]) == 'u')
            {
                countVowels++;
                continue; //  count the vowel
            }
        }
    }

    return countVowels;
}

// counts consonants and returns consonant count
int countConsonants(string theString)
{
    int countConsonants = 0;
    int length = theString.length();

    for (int n = 0; n < length; n++)
    {
        if (isalpha(theString[n]))
        {
            if (tolower(theString[n]) == 'a' || tolower(theString[n]) == 'e' ||
                tolower(theString[n]) == 'i' || tolower(theString[n]) == 'o' ||
                tolower(theString[n]) == 'u')
                continue; //  check for vowel and continue for consonant
            else
            {
                countConsonants++;
                continue; //  count the consonant
            }
        }
    }

    return countConsonants;
}

// converts string to lower case and returns reverse
string reverseStr(string theString)
{
    string reversedString;
    for (int n = theString.length(); n >= 0; n--)
        reversedString = reversedString + theString[n];

    return reversedString;
}

/*------------ OUTPUT PASTED FROM SCREEN ------------
--------------------RUN 1----------------------------
----------------ALL SYMBOLS--------------------------
Please enter a phrase or sentence: !@#

Password must be between 4 and 24 characters.

Please enter a phrase or sentence: !@#$%^&*()_+_)(**&^%$#@!~

Password must be between 4 and 24 characters.

Please enter a phrase or sentence: !@#$%^&*()

UPPER CASED: !@#$%^&*()

lower cased: !@#$%^&*()

Number of Vowels: 0

Number of Consonants: 0

In reverse:  )(*&^%$#@!

Press any key to continue . . .
--------------------RUN 2----------------------------
------------------ALL SPACES-------------------------
Please enter a phrase or sentence:

Password must be between 4 and 24 characters.

Please enter a phrase or sentence:

Password must be between 4 and 24 characters.

Please enter a phrase or sentence:

UPPER CASED:

lower cased:

Number of Vowels: 0

Number of Consonants: 0

In reverse:

Press any key to continue . . .
--------------------RUN 3----------------------------
---------------SPEC FILE EXAMPLE---------------------
Please enter a phrase or sentence: aei XYZ

UPPER CASED: AEI XYZ

lower cased: aei xyz

Number of Vowels: 3

Number of Consonants: 3

In reverse:  ZYX iea

Press any key to continue . . .
--------------------RUN 4----------------------------
-------------SPEC FILE WITH ERRORS-------------------
Please enter a phrase or sentence: aei

Password must be between 4 and 24 characters.

Please enter a phrase or sentence: aei XYZ !@#$%^&*())(*&^%$#@!~

Password must be between 4 and 24 characters.

Please enter a phrase or sentence: aei XYZ

UPPER CASED: AEI XYZ

lower cased: aei xyz

Number of Vowels: 3

Number of Consonants: 3

In reverse:  ZYX iea

Press any key to continue . . .
--------------------RUN 5----------------------------
-------------MIXED EXAMPLE WITH ERRORS---------------
Please enter a phrase or sentence: Hoo

Password must be between 4 and 24 characters.

Please enter a phrase or sentence: Hooray for Foothill College Computer Science

Password must be between 4 and 24 characters.

Please enter a phrase or sentence: Hooray for Foothill CS!

UPPER CASED: HOORAY FOR FOOTHILL CS!

lower cased: hooray for foothill cs!

Number of Vowels: 7

Number of Consonants: 12

In reverse:  !SC llihtooF rof yarooH

Press any key to continue . . .
----------------- END OF SUBMISSION ---------------------*/