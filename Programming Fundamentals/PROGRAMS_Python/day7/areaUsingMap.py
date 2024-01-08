import math
def areas(r):
    return math.pi*(r**2)

radius_grp=[5,5.5,6,7,3.2]
area=list(map(areas,radius_grp))
print(area)
# area=[]
# for i in l:
#     area.append(areas(i))
# print(area)