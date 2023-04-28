reqSeq = [176, 79, 34, 60, 92, 11, 41, 114]
initialHead = 50
diskSize = 200

n = len(reqSeq)

rightSeq = []
leftSeq = []

for i in range(n):
    if reqSeq[i] < initialHead:
        leftSeq.append(reqSeq[i])
    else:
        rightSeq.append(reqSeq[i])

leftSeq.sort(reverse=True)
rightSeq.sort()
order = rightSeq + leftSeq
totalSeek = abs(initialHead - (diskSize-1))
totalSeek = totalSeek + abs(min(leftSeq) - (diskSize-1))

print(f'Order: {order}')
print(f'TotalSeek: {totalSeek}')



