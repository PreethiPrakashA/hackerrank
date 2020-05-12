list1 = map(int,input().split())
int_arr_list = map(int,input().split())
set_A = set(map(int,input().split()))
set_B = set(map(int,input().split()))
happiness = 0

for i in int_arr_list:
    if i in set_A:
        happiness+=1
    elif i in set_B:
        happiness-=1

print(happiness)
