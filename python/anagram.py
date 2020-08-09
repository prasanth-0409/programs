# Anagram 

def str_hash( s ):
    h = 0
    for i in range(0, len(s)):
        h += ord(s[i])
    return h

if __name__ == '__main__':
    db = []
    db = input().split()
    #print(db)
    print("Length of list is", len(db))
    prev_str = db[0]
    prev_hash = str_hash(prev_str)
    new_db = []
    new_db.append(prev_str)
    for i in range(1, len(db)):
        curr_hash = str_hash(db[i])
        if ( (len(prev_str) == len(db[i])) and (curr_hash == prev_hash)):
            continue
        else:
            prev_str = db[i]
            new_db.append(prev_str)

    new_db.sort()
    print(new_db)

