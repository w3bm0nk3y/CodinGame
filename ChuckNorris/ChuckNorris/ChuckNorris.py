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
    while searchStart < len(wholeBinary):
        if wholeBinary[searchStart] == wholeBinary[searchEnd]:
            print "equal"
            returnString = returnString + "0"
            searchStart += 1
            print "1st returnString is now ", returnString
        elif wholeBinary[searchStart] != wholeBinary[searchEnd]:
            print "not equal"
            returnString = returnString + "0 "
            if wholeBinary[searchStart] == "1":
                returnString = "0 " + returnString
                print "Found a one"
            elif wholeBinary[searchStart] == "0":
                returnString = "00 " + returnString
                print "Found a zero"
            searchStart = searchEnd
            print "2nd returnString is now ", returnString   
        else:
            print "else"

    if wholeBinary[searchStart] == "1":
                returnString = "0 " + returnString
                print "Found a one"
    elif wholeBinary[searchStart] == "0":
                returnString = "00 " + returnString
                print "Found a zero"
    print "3rd returnString is now ", returnString

    return returnString



i = 0
finalString = ""

while i < len(MESSAGE):
    convertedBinary = binaryConvert(MESSAGE[i])
    
    i += 1

#print binaryConvert(MESSAGE)
finalString = convertBinary("1000011")    
    
print finalString