class Employee:
    empId = 0
    empName=""
    empDesig=""

    def __init__(self,empId,empName,empDesig):
        self.empId = empId
        self.empName = empName
        self.empDesig = empDesig
        # Employee.printValues(self)

    def printValues(self):
        print(self.empId)
        print(self.empName)
        print(self.empDesig)
        return

n=Employee(101,"Apurva","Developer")
n.printValues()