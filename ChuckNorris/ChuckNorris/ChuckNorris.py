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

def numConvert(number):
    if number == "1":
        return "0 "
    elif number == "0":
        return "00 "
    else:
        return "This number makes no sense"


i = 0
finalString = ""
epsilon = 1
count = 1
searchStart = 0
searchEnd = searchStart + epsilon
while i < len(MESSAGE):
    convertedBinary = binaryConvert(MESSAGE[i])
    k = 0
    while k < len(convertedBinary):
        print numConvert(convertedBinary[k])
        k += 1
    i += 1
    
#print finalString