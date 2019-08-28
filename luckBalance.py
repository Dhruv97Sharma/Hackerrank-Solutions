def luckBalance(k, contests):
    # two lists to store the different lucks and their importance
    lst1 = []
    lst2 = []
    #initialising the total luck
    totalluck = 0
    # to speed up the program a bit
    l1a = lst1.append
    l2a = lst2.append
    # to add the elements with importance 1 in our list
    # and if it is not important then add it to the total luck anyway
    # without adding it inside our lists
    for i in contests:
        if i[1] == 1:
            l1a(i[0])
            l2a(i[1])
        else:
            totalluck += i[0]
    # again to speed up
    l1p = lst1.pop
    l2p = lst2.pop
    # while k is > 0 add the max luck from our list into totalluck
    while k > 0:
        # if lst1 becomes empty
        try:
            temp = max(lst1)
        # return the totalluck
        except:
            return totalluck
        totalluck += temp
        # find index of the luck which was currently added
        index1 = lst1.index(temp)
        # and pop it
        l1p(index1)
        l2p(index1)
        k -= 1
        
    # if k is = or < 0
    # subtract all the remaining luck from totalluck
    for i in lst1:
        totalluck -= i 

    return totalluck