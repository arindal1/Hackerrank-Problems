def solve():
    mod = 10**9+7
    m,r,s = map(int,input().rstrip().split(' '))
    if m == 0 or r<=s: return 0
    arr = list(map(int,input().rstrip().split(' ')))
    if (r-s) % 2 != 0: return 0
    sumb = (r-s)//2
    suma = r - sumb
    
    def get_ways(num):
        dp = [[0]*(num+1) for _ in range(m+1)]
        dp[0][0] = 1
        for c in arr:
            for i in range(len(dp[0])-1,c-1,-1):
                for j in range(len(dp)-2,-1,-1):
                    if dp[j][i-c]>0:
                        #print(j,i,c)
                        dp[j+1][i]+=dp[j][i-c]
        #print(dp)
        for j in range(len(dp)):
            if dp[j][num] > 0:
                #print(j,dp[j][num])
                yield (j,dp[j][num]) #num coins, count
                
    a = list(get_ways(suma))
    #print('---',suma,sumb)
    b = list(get_ways(sumb))
    res = 0
    for i in a:
        for j in b:
            if i[0]==j[0]: #same length
                res += i[1]*j[1]
    return res % mod       
    
print(solve())
