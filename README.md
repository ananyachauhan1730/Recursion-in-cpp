# RECURSION IN CPP

# Aim:
To write C++ programs for:
1. Factorial of an integer
2. Sum of digits of an integer
3. Reverse of a string
4. Reverse of an integer

# Apparatus:
vs code, C++ Complier.

# Theory:

1. Factorial (n!) → The product of all positive integers from 1 to n.
Example: 5! = 5 × 4 × 3 × 2 × 1 = 120

2. Sum of Digits → Each digit of the number is extracted using modulus (% 10) and added until the number becomes.
   
3. Reverse of String → A string can be reversed by traversing it from last character to the first.

4.Reverse of Integer → Digits are extracted using modulus (% 10) and arranged in reverse order using multiplication and addition.

# Algorithm:

# program 1:-

1️⃣ Factorial of an Integer

1. Start
 
2. Input an integer n.
  
4. Initialize fact = 1.
 
5. Repeat from i = 1 to n: multiply
   
6. fact = fact * i.
  
7. Print fact.
    
8. Stop

#  program 2:-

2️⃣Sum of Digits of an Integer

1. Start
   
2. Input an integer n.
  
3. Initialize sum = 0.

4. While n > 0:

5.Extract digit = n % 10.

6.Add digit to sum.

7=Divide n = n / 10

8.Print sum.

9. Stop

# program 3:-

3️⃣ Reverse a String

1. Start
   
2. Input a string str.

3. Initialize empty string rev.
   
4. Traverse from last character of str to first.
  
5. Append each character to rev.
  
6. Print rev.
   
8. Stop

# program:- 4

4️⃣ Reverse an Integer

1. Start

2. Input an integer n.
  
3. Initialize rev = 0.
   
4. While n > 0:
   
5.Extract digit = n % 10.

6.Update rev = rev * 10 + digit.

7.Divide n = n / 10.

8. Print rev.
  
9. Stop

# Conclusion 
Using loops and conditional statements, we can calculate factorial of an integer efficiently. By applying the modulus (%) and division (/) operations, we can easily find the sum of digits of an integer.Strings can be manipulated and reversed by traversing them from end to start.Integers can also be reversed digit by digit using simple arithmetic operations.Thus, we successfully implemented and verified the programs for factorial, sum of digits, reverse of a string, and reverse of an integer using C++.


   

    




