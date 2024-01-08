import sys
l=[10,20,30,40,50,"appu","apurva"]
print(l)
print(id(l[0]),id(l[1]),id(l[2]),id(l[3]),id(l[4]),id(l[5]),id(l[6]))
print()
# size
print(sys. getsizeof(id(l[1])-id(l[0])))
print(sys. getsizeof(id(l[5])-id(l[4])))
print(sys. getsizeof(id(l[6])-id(l[5]))) 
# print(320/8)