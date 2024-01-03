def fun1():
    print("Inside fun1")
    def fun2():
        print("Inside fun2 from fun1")
        def fun3():
            print("Inside fun3 from fun2 in fun1")
        return fun3
    return fun2

print("Address of fun1: ",fun1)
a=fun1()
print("\nAddress of fun2: ",a)
b=a()
print("\nAddress of fun3: ",b)
b()