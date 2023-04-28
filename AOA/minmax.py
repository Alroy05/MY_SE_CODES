def findMinMax(a,low,high):
    if a[low]==a[high]:
        return a[low],a[low]
    elif a[low+1]==a[high]:
        if a[low]<a[high]:
            return a[low],a[high]
        else:
            return a[high],a[low]
    else:

        mid=(high+low)//2
        minR,maxR=findMinMax(a,low,mid)
        minL,maxL=findMinMax(a,mid+1,high)

        maximum = max(maxR,maxL)
        minimum = min(minR,minL)

        return minimum,maximum
   
a= list(map(int,input("Enter the numbers with space: ").split()))
n = len(a)

min,max=findMinMax(a,0,n-1)
print(f'Maximum number in the list is:{max}\nMinimum number in the list is:{min}')