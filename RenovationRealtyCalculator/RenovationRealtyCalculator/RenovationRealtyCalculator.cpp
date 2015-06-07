// -------------- SOURCE FILE OF ASSIGNMENT ----------
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// ---------------- the class prototype ---------------------------------
class DateProfile
{
private:
    char gender, searchGender;
    int romance, finance;
    string name;

    // private methods
    double determineGenderFit(DateProfile partner);
    double determineRomanceFit(DateProfile partner);
    double determineFinanceFit(DateProfile partner);

public:
    // static constants
    static const int MIN_ROMANCE = 1;
    static const int MAX_ROMANCE = 10;
    static const int MIN_FINANCE = 1;
    static const int MAX_FINANCE = 10;
    static const int MIN_STR_LEN = 1;
    static const int MAX_STR_LEN = 60;
    static const char DEFAULT_GENDER = 'F';
    static const char DEFAULT_SEARCH_GENDER = 'M';
    static const int DEFAULT_ROMANCE = 5;
    static const int DEFAULT_FINANCE = 5;
    static const int TEN = 10;
    static const double PERFECT_MATCH;
    static const double NO_MATCH;
    static const string DEFAULT_NAME;

    // default constructor
    DateProfile();

    // deconstructor
    ~DateProfile();

    // 5-parameter constructor
    DateProfile(char myGender, char mySearchGender, int myRomance,
        int myFinance, string myName);

    // mutators and accessors
    bool setGender(char gender);
    bool setSearchGender(char searchGender);
    bool setRomance(int romance);
    bool setFinance(int finance);
    bool setName(string name);
    char getGender();
    char getSearchGender();
    int getRomance();
    int getFinance();
    string getName();

    // class methods
    double fitValue(DateProfile partner);

};

// static member intialization
const string DateProfile::DEFAULT_NAME = "Jane Doe";
const double DateProfile::PERFECT_MATCH = 1.0;
const double DateProfile::NO_MATCH = 0.0;

// ------------------ the main method ---------------------------------
int  main()
{
    // using parameterized constructor to create 4 applicants
    DateProfile applicant1('M', 'F', 7, 4, "Hugh Hefner");
    DateProfile applicant2('F', 'M', 7, 4, "Crystal Harris");
    DateProfile applicant3('M', 'F', 1, 10, "Kevin Federline");
    DateProfile applicant4('F', 'M', 10, 1, "Nota Celebrity");

    // display fit values for applicant 1
    cout << applicant1.getName() << endl << endl;
    cout << applicant1.getName() << " fit: "
        << applicant1.fitValue(applicant1) << endl << endl;
    cout << applicant2.getName() << " fit: "
        << applicant1.fitValue(applicant2) << endl << endl;
    cout << applicant3.getName() << " fit: "
        << applicant1.fitValue(applicant3) << endl << endl;
    cout << applicant4.getName() << " fit: "
        << applicant1.fitValue(applicant4) << endl << endl << endl;

    // display fit values for applicant 2
    cout << applicant2.getName() << endl << endl;
    cout << applicant2.getName() << " fit: "
        << applicant2.fitValue(applicant2) << endl << endl;
    cout << applicant1.getName() << " fit: "
        << applicant2.fitValue(applicant1) << endl << endl;
    cout << applicant3.getName() << " fit: "
        << applicant2.fitValue(applicant3) << endl << endl;
    cout << applicant4.getName() << " fit: "
        << applicant2.fitValue(applicant4) << endl << endl << endl;

    // display fit values for applicant 3
    cout << applicant3.getName() << endl << endl;
    cout << applicant3.getName() << " fit: "
        << applicant3.fitValue(applicant3) << endl << endl;
    cout << applicant1.getName() << " fit: "
        << applicant3.fitValue(applicant1) << endl << endl;
    cout << applicant2.getName() << " fit: "
        << applicant3.fitValue(applicant2) << endl << endl;
    cout << applicant4.getName() << " fit: "
        << applicant3.fitValue(applicant4) << endl << endl << endl;

    // display fit values for applicant 4
    cout << applicant4.getName() << endl << endl;
    cout << applicant4.getName() << " fit: "
        << applicant4.fitValue(applicant4) << endl << endl;
    cout << applicant1.getName() << " fit: "
        << applicant4.fitValue(applicant1) << endl << endl;
    cout << applicant2.getName() << " fit: "
        << applicant4.fitValue(applicant2) << endl << endl;
    cout << applicant3.getName() << " fit: "
        << applicant4.fitValue(applicant3) << endl << endl;

    return 0;
}

// ------------ DateProfile private member functions definitions ------------
// gender fit function
double DateProfile::determineGenderFit(DateProfile partner)
{
    if (gender == partner.searchGender && searchGender == partner.gender)
    {
        return PERFECT_MATCH;
    }
    else
    {
        return NO_MATCH;
    }
}

// finance fit funtion
double DateProfile::determineFinanceFit(DateProfile partner)
{
    double financeDifference;

    if (finance == partner.finance)
    {
        return PERFECT_MATCH;
    }
    else
    {
        financeDifference = abs(finance - partner.finance);
        financeDifference = PERFECT_MATCH - (financeDifference / TEN);
        return financeDifference;
    }
}

// romance fit funtion
double DateProfile::determineRomanceFit(DateProfile partner)
{
    double romanceDifference;

    if (romance == partner.romance)
    {
        return PERFECT_MATCH;
    }
    else
    {
        romanceDifference = abs(romance - partner.romance);
        romanceDifference = PERFECT_MATCH - (romanceDifference / TEN);
        return romanceDifference;
    }
}

// ------------ DateProfile public member functions definitions ------------
// fit value function
double DateProfile::fitValue(DateProfile partner)
{
    double fitValueReturn;

    // calculate fit value to return
    fitValueReturn = this->determineGenderFit(partner) *
        (this->determineFinanceFit(partner) *
            this->determineRomanceFit(partner));

    return fitValueReturn;
}

// default constructor
DateProfile::DateProfile()
{
    gender = DEFAULT_GENDER;
    searchGender = DEFAULT_SEARCH_GENDER;
    romance = DEFAULT_ROMANCE;
    finance = DEFAULT_FINANCE;
    name = DEFAULT_NAME;
}

// 5-parameter constructor
DateProfile::DateProfile(char myGender, char mySearchGender, int myRomance,
    int myFinance, string myName)
{
    if (!setGender(myGender))
        gender = DEFAULT_GENDER;
    if (!setSearchGender(mySearchGender))
        searchGender = DEFAULT_SEARCH_GENDER;
    if (!setRomance(myRomance))
        romance = DEFAULT_ROMANCE;
    if (!setFinance(myFinance))
        finance = DEFAULT_FINANCE;
    if (!setName(myName))
        name = DEFAULT_NAME;
}

// destructor
DateProfile::~DateProfile()
{
    // uncomment following line if you want to see object destruction
    //cout << "Applicant " << name << " has been deleted;" << endl << endl;
}

// mutators "set" methods
bool DateProfile::setGender(char gender)
{
    if (gender != 'M' && gender != 'F')
        return false;
    //else
    this->gender = gender;
    return true;
}

bool DateProfile::setSearchGender(char searchGender)
{
    if (searchGender != 'M' && searchGender != 'F')
        return false;
    //else
    this->searchGender = searchGender;
    return true;
}

bool DateProfile::setRomance(int romance)
{
    if (romance < MIN_ROMANCE || romance > MAX_ROMANCE)
        return false;
    //else
    this->romance = romance;
    return true;
}

bool DateProfile::setFinance(int finance)
{
    if (finance < MIN_FINANCE || finance > MAX_FINANCE)
        return false;
    //else
    this->finance = finance;
    return true;
}

bool DateProfile::setName(string name)
{
    if (name.length() < MIN_STR_LEN || name.length() > MAX_STR_LEN)
        return false;
    //else
    this->name = name;
    return true;
}

// accessor "get" methods 
char DateProfile::getGender()
{
    return gender;
}
char DateProfile::getSearchGender()
{
    return searchGender;
}
int DateProfile::getRomance()
{
    return romance;
}
int DateProfile::getFinance()
{
    return finance;
}
string DateProfile::getName()
{
    return name;
}

/*------------ OUTPUT PASTED FROM SCREEN ------------

----------------- END OF SUBMISSION ---------------------*/