import sys
import math
import binascii

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

MESSAGE = "C"

# Write an action using print
# To debug: print >> sys.stderr, "Debug messages..."

def binaryConvert(letter):
    BINARY = bin(int(binascii.hexlify(letter), 16))
    BINARY = BINARY[2:]

    return BINARY

def convertBinary(wholeBinary):
    searchStart = 0
    searchEnd = searchStart + 1
    returnString = ""
    currentString = ""
    while searchStart < len(wholeBinary):
        print wholeBinary
        print searchStart
        print searchEnd
        if wholeBinary[searchStart] == wholeBinary[searchEnd]:
            currentString = currentString + "0"
            searchEnd += 1
            searchStart += 1
            print "currentString is now " + currentString           
        elif wholeBinary[searchStart] != wholeBinary[searchEnd]:
            currentString = currentString + "0 "
            print "currentString is now " + currentString            
            if wholeBinary[searchStart] == "1":
                print "Pre-returnString is now " + returnString
                returnString = returnString + "0 " + currentString
                print "Found a one"
                print "returnString is now " + returnString
            elif wholeBinary[searchStart] == "0":
                print "Pre-returnString is now " + returnString
                returnString = returnString + "00 " + currentString
                print "Found a zero"
                print "returnString is now " + returnString
            searchStart = searchEnd
            searchEnd += 1  
        else:
            print "else"

    #if wholeBinary[searchStart] == "1":
    #            returnString = "0 " + returnString
    #            print "Found a one"
    #elif wholeBinary[searchStart] == "0":
    #            returnString = "00 " + returnString
    #            print "Found a zero"
    #print "3rd returnString is now ", returnString

    return returnString



i = 0
finalString = ""

while i < len(MESSAGE):
    convertedBinary = binaryConvert(MESSAGE[i])
    
    i += 1

print binaryConvert(MESSAGE)
finalString = convertBinary(convertedBinary)    
    
print finalString