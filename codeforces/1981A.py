tc = int(input())
for t in range(tc):
    l, r = input().split()
    ans = 0
    r = int(r)
    while r > 1:
        ans = ans+1
        r = r//2
    print( ans )