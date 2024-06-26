import math

def solve():
    a, b, l = map(int, input().split())
    loop_val_a = int(math.log(l) / math.log(a))
    loop_val_b = int(math.log(l) / math.log(b))
    s = set()
    for i in range(loop_val_a + 2):
        for j in range(loop_val_b + 2):
            a_new = a**i
            b_new = b**j
            prd = a_new * b_new
            if l > prd and l % prd == 0:
                s.add(prd)
    print(len(s))

def main():
    t = int(input())
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()
