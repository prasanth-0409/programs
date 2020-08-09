my_list = [1,2,3,4]
my_list.reverse()
max = my_list[0]
for i in my_list:
    if i != max:
        max = i;
        break;
print("2nd max :",max)
