#Head count=65+1(rajasthan)=66+1(het)=67+1(nirav)=68+1(satya)=69+4(random)
def functionName(a,b) -> int:
    return a,b

def functionName1(a,b,m) :
    print(a,*b,m)

def functionName1() :
    print("hello")

if __name__=="__main__":
    print(functionName)
    print(functionName(b=10,a=8))
    functionName1(b=("Prajapati","boss00"),a="Appu",m="Girshkumar")