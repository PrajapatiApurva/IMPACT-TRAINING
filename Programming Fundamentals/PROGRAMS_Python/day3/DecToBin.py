num=int(input("Enter The Number: "))
i=31
while i>=0:
    print(((num>>i)&1),end="")
    i=i-1