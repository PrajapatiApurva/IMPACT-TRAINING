# class A: pass
# class B: pass
# class C(A,B): pass

# print(C.mro())
# print(C.__mro__)

# class A: pass
# class B: pass
# class C(A): pass
# class D(B): pass
# class E(C,D): pass

# print(*E.__mro__,sep='\n')
class X:pass
class Z:pass
class A(X,Z): pass
class B: pass
class C: pass
class D: pass
class E(D,B): pass
class F(C,D):pass
class G(E,F,A,X):pass
print(*G.__mro__,sep='\n')
