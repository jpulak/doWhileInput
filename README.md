# doWhileInput
General Description:
Write a program that gets an unspecified number of whole numbers from the user and displays: the number of positive values entered, the sum of the positive values entered, the number of negative values entered, the product of the negative values entered, and the number of zeroes entered.

After the user enters a number, display a message asking the user if they would like to enter another number and asking for a response of Y for Yes or N for No. Use a do-while loop to control the number of iterations. You program must function properly regardless of whether the user responds with upper or lowercase Y or N.

Use ints for the other variables of the program.

Make the output look like the following in your IDE. Do not forget to display a newline at the end of your output.

Recall that Zylabs uses preprogrammed inputs, so the values entered by the user and the newline generated when the user presses enter are not displayed in Zylabs.

Failure to follow the requirements for lab lessons can result in deductions to your points, even if you pass the validation tests. Logic errors, where you are not actually implementing the correct behavior, can result in reductions even if the test cases happen to return valid answers. This will be true for this and all future lab lessons.

Display Details
Make the output look like the following in your IDE. Do not forget to display a newline at the end of your output.

Recall that Zylabs uses preprogrammed inputs, so the values entered by the user and the newline generated when the user presses enter are not displayed in Zylabs.

Sample Output 1:
```
Enter whole number 1: 2
Would you like to enter another number?
Enter Y for Yes or N for No: Y
Enter whole number 2: 8
Would you like to enter another number?
Enter Y for Yes or N for No: y
Enter whole number 3: -5
Would you like to enter another number?
Enter Y for Yes or N for No: Y
Enter whole number 4: -3
Would you like to enter another number?
Enter Y for Yes or N for No: 4
Error, 4 is not a valid response.
Would you like to enter another number?
Enter Y for Yes or N for No: N

2 positive values were entered. Their sum was 10.
2 negative values were entered. Their product was 15.
No zeroes were entered.
```
Sample Output 2:
```
Enter whole number 1: 11
Would you like to enter another number?
Enter Y for Yes or N for No: Y
Enter whole number 2: 0
Would you like to enter another number?
Enter Y for Yes or N for No: y
Enter whole number 3: -3
Would you like to enter another number?
Enter Y for Yes or N for No: N

One positive value was entered. It was a 11.
One negative value was entered. It was a -3.
One zero was entered.
```
Sample Output 3:
```
Enter whole number 1: 6
Would you like to enter another number?
Enter Y for Yes or N for No: Y
Enter whole number 2: 3
Would you like to enter another number?
Enter Y for Yes or N for No: Y
Enter whole number 3: 7
Would you like to enter another number?
Enter Y for Yes or N for No: y
Enter whole number 4: 0
Would you like to enter another number?
Enter Y for Yes or N for No: Y
Enter whole number 5: 5
Would you like to enter another number?
Enter Y for Yes or N for No: N

4 positive values were entered. Their sum was 21.
No negative values were entered.
One zero was entered.
```
