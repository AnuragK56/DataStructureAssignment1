## Assignment for Data Structure

## Assignment 1

## 1.Little Elephant
A Little Elephant and his friends from the Zoo of Lviv like candies very much.
There are N elephants in the Zoo. The elephant with number K (1 ≤ K ≤ N) will be happy if he
receives at least 2+AK candies. There are C candies in all in the Zoo.
The Zoo staff is interested in knowing whether it is possible to make all the N elephants happy
by giving each elephant at least as many candies as he wants, that is, the Kth elephant should
receive at least 2+AK candies. Each candy can be given to only one elephant. Print Yes if it is
possible and No otherwise.
Input
The first line of the input file contains an integer T, the number of test cases. T test cases follow.
Each test case consists of exactly 2 lines. The first line of each test case contains two space
separated integers N and C, the total number of elephants and the total number of candies in
the Zoo respectively. The second line contains N space separated integers A1, A2, ..., AN.
Output
For each test case output exactly one line containing the string Yes if it possible to make all
elephants happy and the string No otherwise. Output is case sensitive. So do not print YES or
yes.
* Constraints
   1 ≤ T ≤ 1000  
   1 ≤ N ≤ 100  
   1 ≤ C ≤ 109  
   1 ≤ AK ≤ 10000, for K = 1, 2, ..., N  
* Example
 * Input:  
   3  
   3 12  
   113  
   47  
   4221  
   2 25  
   25  
 * Output:  
   Yes  
   No  
   Yes  

## 2. Salary
Little chief has his own restaurant in the city. There are N workers there. Each worker has his
own salary. The salary of the i-th worker equals to Wi (i = 1, 2, ..., N). Once, chief decided to
equalize all workers, that is, he wants to make salaries of all workers to be equal. But for this
goal he can use only one operation: choose some worker and increase by 1 salary of each

worker, except the salary of the chosen worker. In other words, the chosen worker is the loser,
who will be the only worker, whose salary will be not increased during this particular operation.
But loser-worker can be different for different operations, of course. Chief can use this
operation as many times as he wants. But he is a busy man. That's why he wants to minimize
the total number of operations needed to equalize all workers. Your task is to find this number.
Input
The first line of the input contains an integer T denoting the number of test cases. The
description of T test cases follows. The first line of each test case contains a single
integer N denoting the number of workers. The second line contains Nspace-separated
integers W1, W2, ..., WN denoting the salaries of the workers.
Output
For each test case, output a single line containing the minimum number of operations needed
to equalize all workers.
* Constraints
       1 ≤ T ≤ 100  
       1 ≤ N ≤ 100  
       0 ≤ Wi ≤ 10000 (104)  
* Example
  * Input:
      2  
      3  
      123  
      2  
      42 42  
 *  Output:  
      3  
      0  
Explanation  
 Example Case 1. Chief can equalize all salaries in 3 turns:
Turn ID  

IDs of involved workers  

Salaries after the move  

1

12

233

2

12

343

3

13

444
 
Example Case 2. All salaries are already equal. He doesn't need to do anything.

## 3 Safehouse
There are 150 houses located on a straight line. The first house is numbered 1 and the last one
is numbered 150. Some M houses out of these 150 are occupied by cops.
Thief Devu has just stolen PeePee's bag and is looking for a house to hide in.
PeePee uses fast 4G Internet and sends the message to all the cops that a thief named Devu
has just stolen her bag and ran into some house.

Devu knows that the cops run at a maximum speed of x houses per minute in a straight line and
they will search for a maximum of y minutes. Devu wants to know how many houses are safe
for him to escape from the cops. Help him in getting this information.
Input
First line contains T, the number of test cases to follow.
First line of each test case contains 3 space separated integers: M, x and y.
For each test case, the second line contains M space separated integers which represent the
house numbers where the cops are residing.
Output
For each test case, output a single line containing the number of houses which are safe to hide
from cops.
* Constraints
     1 ≤ T ≤ 104
     1 ≤ x, y, M ≤ 10
* Example
 * Input:
    3  
    478  
    12 52 56 98  
    2 10 2  
    21 75  
    258  
    10 51  
 * Output:
    0  
    68  
    59  
Explanation   
Example 1: Cops in house 12 can cover houses 1 to 68, and cops in house 98 can cover the rest
of the houses. So, there is no safe house.   
Example 2: Cops in house 21 can cover houses 1 to 41, and cops in house 75 can cover houses
55 to 95, leaving houses numbered 42 to 54, and 96 to 150 safe. So, in total 68 houses are safe.  


## 4 Dynamic Array
Write a C program to input elements in an array (dynamic array) and sort array using pointers.
Example
Input  
Input array elements: 10 -1 0 4 2 100 15 20 24 -5  
Output  
Array in ascending order: -5, -1, 0, 2, 4, 10, 15, 20, 24, 100,  
Array in descending order: 100, 24, 20, 15, 10, 4, 2, 0, -1, -5,  


