def sockMerchant(n, ar):
    set1 = set()
    pair_ct =0
    for i in ar:
        if i not in set1:
            set1.add(i)
        else:
            set1.remove(i)
            pair_ct+=1
    return pair_ct
