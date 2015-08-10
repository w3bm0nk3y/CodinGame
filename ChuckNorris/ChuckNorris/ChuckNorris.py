import sys
import math
import binascii

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

MESSAGE = "C"

# Write an action using print
# To debug: print >> sys.stderr, "Debug messages..."
i = 0
finalString = ""
epsilon = 1
count = 1
searchStart = 0
searchEnd = searchStart + epsilon
while i < len(MESSAGE):
    BINARY = bin(int(binascii.hexlify(MESSAGE[i]), 16))
    BINARY = BINARY[2:]

    print BINARY
    print epsilon
    if BINARY[searchStart] == BINARY[searchEnd]:
        print BINARY[searchStart], " equals ", BINARY[searchEnd]
        print "Count is ", count
        count = count + 1
    else:
        print BINARY[searchStart], " does not equal ", BINARY[searchEnd]
        searchStart = searchEnd
        count = 1
    epsilon = epsilon + 1

    '''    
    print >> sys.stderr, BINARY[searchStart:]
    k = 2


    while k < len(BINARY):
        if BINARY[k] == "1":
            finalString += "0 "
        elif BINARY[k] == "0":
            finalString += "00 "

        k += 1
    i += 1
    '''
print finalString