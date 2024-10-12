for i in range(int(input())):
    n = int(input())
    i = 1
    while (i<=n):
        i *= 2
    
    i = int(i/2)
    ans = max(i-1 , n-i+1)
    print(ans) 