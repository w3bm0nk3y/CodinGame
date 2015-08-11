def isPalindrome(s):
    """Assumes s is a str
       Returns True if s is a palindrome; False otherwise.
        Punction marks, blanks, and capitalization are
        ignored."""
    
    def toChars(s):
        s = s.lower()
        letters = ''
        for c in s:
            if c in 'abcdefghijklmnopqrstuvwxyz':
                letters = letters + c
        return letters
    
    def isPal(s):
        print ' isPal called with', s
        if len(s) <= 1:
            print ' About to return True from base case'
            return True
        else:
            answer = s[0] == s[-1] and isPal(s[1:-1])
            print ' About to return', answer, 'for', s
            return answer
    
    return isPal(toChars(s))

def testIsPalindrome(string1, string2):
    print "Try ", string1
    print isPalindrome(string1)
    print "Try", string2
    print isPalindrome(string2)

testIsPalindrome("I am part of a lost generationnoitareneg tsol a fo trap ma I","doggod")
