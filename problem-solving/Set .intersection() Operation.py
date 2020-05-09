# Enter your code here. Read input from STDIN. Print output to STDOUT
int(input())
x =  set(map(int,input().split()))
int(input())
y =  set(map(int,input().split()))
z = x.intersection(y)
print(len(z))
