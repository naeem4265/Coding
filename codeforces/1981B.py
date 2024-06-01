def solved(tc):
    n, m = input().split(' ')
    n = int(n)
    m = int(m)
    if m==0:
        print(n)
        return
    m-=1
    i = 1
    n +=1
    while 1:
        if i > n:
            dis = i - n
            if dis > m:
                print(i-1)
                return
            m -= dis
            n = i
        i = i*2

tc = int(input())
for i in range(0, tc):
    solved(i)
