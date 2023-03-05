database = {}
key = input().strip()

while key != "*":
    database[key] = True
    key = input().strip()

while True:
    cmd, key = input().strip().split()
    if cmd == "find":
        if key in database:
            print("1")
        else:
            print("0")
    elif cmd == "insert":
        if key in database:
            print("0")
        else:
            database[key] = True
            print("1")
    if key == "***":
        break
