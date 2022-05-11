from math import sqrt

def is_palindrome(num):
    return str(num) == str(num)[::-1]

def main():
    A = int(input())
    num_pal = 0
    seen = set()
    for i in range(1, int(sqrt(A))+1):
        if A%i==0:
            if i not in seen:
                if is_palindrome(i):
                    num_pal += 1
                seen.add(i)
            if A//i not in seen:
                if is_palindrome(A//i):
                    num_pal += 1
                seen.add(A//i)
    return num_pal


if __name__ == '__main__':
    T = int(input())
    for t in range(1,T+1):
        print(f"Case #{t}: {main()}")
