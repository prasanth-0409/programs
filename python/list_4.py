if __name__ == '__main__':
    N = int(input())
    my_list = []
    for _ in range(N):
        str1 = (input())
        cmd = str1.split()
        if cmd[0] == 'insert':
            index = int(cmd[1])
            value = int(cmd[2])
            my_list.insert( index,value)
        elif cmd[0] == 'print':
            print(my_list)
