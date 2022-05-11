from math import pi

def main():
    R, A, B = map(int,input().split())
    sum_area = 0
    while R > 0:
        sum_area += pi*R*R
        R*=A
        sum_area += pi*R*R
        R//=B
    return sum_area


if __name__ == '__main__':
    T = int(input())
    for t in range(1,T+1):
        print(f"Case #{t}: {main()}")
