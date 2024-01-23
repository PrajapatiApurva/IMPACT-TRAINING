# class par:
#     def add(self,a,b=10):
#         print(a+b)
#     def sub(self,a,b):
#         print(a-b)

# obj1=par()
# obj1.add(10)
# obj2=par()
    
# class Test:
#     def __init__(self):
#         self.x=0
        
# class Test2(Test):
#     def __init__(self):
#         # super().__init__()
#         Test.__init__(self)
#         self.y=1
        
# b=Test2()
# print(b.x,b.y)

# class Test:
#     def __str__(self):
#         return '1'
        
# class Test1(Test):
#     def __init__(self):
#         super().__init__()

# class Test2(Test1):
#     def __init__(self):
#         super().__init__()

# obj1=Test1()
# obj2=Test()
# obj3=Test2()
# print(obj1,obj2,obj3)

print(dir(object))