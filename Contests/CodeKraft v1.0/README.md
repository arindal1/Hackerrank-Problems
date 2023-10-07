# CodeKraft v1.0

---

## Find runner's order

In an IEM competitive sprint spanning a distance of 100 meters, a multitude of participants engaged in a race. The task at hand involves finding the comprehensive sequence in which the race transpired. This necessitates the interpretation of a set of pairs denoting the finishing order, where each pair, represented as ("abc", "xyz"), signifies that the runner named "abc" successfully concluded the race ahead of the runner designated as "xyz." The ultimate objective is to reduce and present the absolute order in which the runners accomplished the race, based on the provided pairings.

### Input Format

First line contains 2 space separated integers n and p.
Each of the next p lines contains a pair of names (separated by space).
### Constraints

2 <= n <= 1000
n-1 <= p <= 4000
### Output Format

Output should be the names of the n runners in the order in which they finished the race.
Names should be separated by spaces.
### Sample Input 0
```
5 8
ney benz
bale ron
ron benz
bale ney
leo ney
leo benz
ron ney
ron leo
```
### Sample Output 0

```bale ron leo ney benz```

---

## Magical Cab

Jane wants to go to Andy's birthday party. For that, he takes a magical cab which can only move 2,5,7 steps at a time. Consider Jane starts from 0 and Vivek's house is at x. Determine, what is the minimum number of steps Jane need to make in order to get to Andy's house. Print -1 if it is impossible for him to get to Andy's House.

### Input Format

The first line of the input contains an integer x — The coordinate of Andy’s house.

### Constraints

1 ≤ x ≤ 1000 000

### Output Format

Print the minimum number of steps that Jane needs to make to get from point 0 to point x. If it's impossible for him to reach x, print -1.

### Sample Input 0

14
### Sample Output 0

2
### Sample Input 1

3
### Sample Output 1

-1

---

### Magical Robbery Bags

Rob is a thief, and he's planning to steal gold from a shop. The shop has a certain amount of gold, let's call it 'n' kilograms, but Rob can't take it all in one go. Luckily, he has some magical robbery bags that can multiply the gold they contain.

Rob needs your help to figure out how to divide the gold into 'k' different bags to get the most value out of it. Your task is to find the maximum value of gold Rob can steal and determine the minimum number of bags he needs to do it. Keep in mind that Rob must take at least two bags with him.

### Input Format

Single Integer 'n' denoting the amount of gold

### Constraints

2<=n<=58 k>=2

### Output Format

Print the maximum value of gold and minimum number of bags separated by space.

### Sample Input 0

3
### Sample Output 0

2 2
### Explanation 0

If 'n' is 3 kilograms, Rob can divide it into two bags, one with 2 kilograms and the other with 1 kilogram. When he multiplies these bags together, he gets a maximum value of 2x1=2 kilograms.

### Sample Input 1

10
### Sample Output 1

36 3
### Explanation 1

If 'n' is 10 kilograms, Rob can divide it into three bags, one with 3 kilograms, another with 3 kilograms, and the last one with 4 kilograms. This division allows him to get a maximum value of 36 kilograms. It's important to note that dividing the 4 kilograms further into two bags would not increase the value but would increase the number of bags, which is not what Rob wants.
