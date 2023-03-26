def Please_AC(t):
    n,k = map(int, input().split())
    d = [0]*(n+5)
    for i in range(1, n+1):
        if k>=i:
            d[i] = 10
            k -= i;
        else:
            d[i] = -9
            d[i] -= (i-k-1)*10
            k = 0
    for i in range(1, n+1):
        print(d[i], end=' ')
    print()


if __name__ == '__main__':
    tt = int(input())
    for t in range(1, tt+1):
        Please_AC(t)
