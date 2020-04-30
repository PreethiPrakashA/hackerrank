def average(array):
    # your code goes here
    arr= set(array)
    sum=0
    for i in arr:
        sum+=i
    return sum/len(arr)
	
