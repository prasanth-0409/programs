shop = ['onions','tomatoes','carrot']

new_list = [] # Empty list

#print(shop)

for i in shop:
    print(i,end=' ')

shop.insert(0,'beans')

for i in shop:
    print(i,end=' ')

shop.sort()
print(shop)
