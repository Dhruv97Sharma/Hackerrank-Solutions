def largestRectangle(h):
    #var for storing maximum area
    mx = 0
    for i in range(len(h)):
        # for storing indexes of left and right minimum
        # element which the next most to the present element
        lmn = 0
        rmn = 0

        for j in range(i-1,-1,-1):
            if h[i] <= h[j]:
                lmn += 1
            else:
                break
        for j in range(i+1,len(h)):
            if h[i] <= h[j]:
                rmn += 1
            else:
                break
        # calculating area of the histogram formed
        area = h[i]*(lmn+rmn+1)
        mx = max(mx,area)

    return mx
