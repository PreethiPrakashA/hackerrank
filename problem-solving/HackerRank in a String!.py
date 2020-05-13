def hackerrankInString(s):
    str1 = "hackerrank"
    j=0
    flag = 0
    res = "YES"
    res2 = "NO"
    for c in s:
        if(str1[j]==c):
            j+=1
        if(j==len(str1)):
            flag = 1
            break
         
    if (flag==1):    
      return res
    else:
        return res2
