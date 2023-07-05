## Task
The provided code stub reads and integer, , from STDIN. For all non-negative integers , print .

Example

The list of non-negative integers that are less than  is . Print the square of each number on a separate line.

if __name__ == '__main__':
    n = int(input())
    for i in range(0, n):
        print(i ** 2)
