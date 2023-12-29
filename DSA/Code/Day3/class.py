class Name:
    a = 0
    b = 0

    def __init__(self):
        self.a=10
        self.b=20

    def printValues(self):
        print(self.a,self.b)
        return 0

n=Name()
n.printValues()