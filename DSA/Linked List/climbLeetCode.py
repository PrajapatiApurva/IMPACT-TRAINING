def climbStairs(n: int) -> int:
    a,b,c=0,1,0

    for i in range(n):
        print(a)
        c=a+b
        a,b=b,c
        

    return b
    
if __name__=="__main__":
    inp=int(input())
    print(climbStairs(inp))    