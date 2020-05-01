n = int(input())
s = set(map(int, input().split()))

for i in range(int(input())):
    cmd = input().split()
    if ( cmd[0] == 'remove'):
        s.remove(int(cmd[1]))
    elif(cmd[0]=='discard'):
        s.discard(int(cmd[1]))
    else:
        s.pop()

sum = 0
for i in s:
    sum+=i
print(sum)
