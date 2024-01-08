class calc:
    pi=3.14
    def area(self,r):
        return self.pi*r*r
    def peri(self,r):
        return 2*self.pi*r
# obj=calc()
# print(calc)
# print(calc())
# print(obj)
# print(calc.area(5))
obj=calc()
print(obj.area(5))