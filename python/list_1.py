list_1 = [1,2,3]

print(list_1)

#for i in list_1:
#    print(i)

print("List:")
for i in range(0,3):
    print(list_1[i])

print("Reverse:")
for i in range(-1, -4, -1):
    print(list_1[i])

list_2 = [4,5,6]

print(list_2)
# Combine both lists
list_1 = list_1 + list_2
print(list_1)

print("Slicing print whole list:")
print(list_1[:])

print(list_1[1:4])
#print(list_1[-1:-2])

print("Comprehensive list:")
#print([x,y] for x in range(2)  )
print([[x,y,z] for x in range(2) for y in range(2) for z in range(2) if x + y + z != 2])

