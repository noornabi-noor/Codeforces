n=int(input())
l=[int(i) for i in input().split()]

def f(l):
    cur = 0
    n = 0
    for i in l:
        n += cur // i + 1
        cur = i * (cur // i + 1)
    return n

print(min(f(l[i+1:])+f(l[:i][::-1]) for i in range(n)))