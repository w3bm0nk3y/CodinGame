import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner input = new Scanner(System.in);
        int numOfInputs = input.nextInt();
        String [] numbers = new String[numOfInputs];
        
        //first create object of username class:
 
        checker checkNumber = new checker();
      
        for (int i = 0; i < numOfInputs; i++)
        {
            numbers[i] = input.next();
        }
        
        for (int i = 0; i < numOfInputs; i++)
        {
            System.out.println(numbers[i]);
            checkNumber.byte(numbers[i]);
        }
       
    }
    
class checker  
 
{
   
   public void byte(numbers[i])
   {
       System.out.println(numbers[i]);
   }
}

}