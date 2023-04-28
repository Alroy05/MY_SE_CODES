reqSeq = [45, 21, 67, 90, 4, 89, 52, 61, 87, 25]
initialHead = 50
currentHead = initialHead
m = len(reqSeq)
order = []
totalSeek = 0

while len(order) != m:
    n = len(reqSeq)
    seekFromCurrentHead = [abs(reqSeq[i]-currentHead) for i in range(n)]
    totalSeek = totalSeek + min(seekFromCurrentHead)
    minIndex = seekFromCurrentHead.index(min(seekFromCurrentHead))
    order.append(reqSeq[minIndex])
    currentHead = reqSeq[minIndex]
    reqSeq.remove(reqSeq[minIndex])

print(f'order: {order}')
print(f'Total seek: {totalSeek}')
    
