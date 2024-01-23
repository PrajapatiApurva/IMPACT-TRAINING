#overriding
class normalcalc:
    def add(self,a,b):
        return a+b
    def sub(self,a,b):
        return a-b
#inheritance  
class scientificcalc(normalcalc):
    
    def add(self,a,b,c):   
        x=super().add(a,b)
        print(x)
        return a+b+c
    # def sub(self,a,b):
    #     return a-b
    
obj=scientificcalc()
print(obj.sub(45,18))
print(obj.add(45,18,7))