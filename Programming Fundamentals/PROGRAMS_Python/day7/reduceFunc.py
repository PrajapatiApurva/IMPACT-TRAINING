from functools import reduce
# a**b**c**d**e**f
# ((((a*b)/c)*d)/e)/*f
l=[10,30,23,45,7,59,3.5]
a=reduce(lambda x,y:x if x>y else y,l)
print(a)