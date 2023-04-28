replace = 0
numberPageSlot = 4
queue = [-1]*numberPageSlot
referenceString = [7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2]
pageMiss = 0
pageHit = 0

for i in range(len(referenceString)):
    if referenceString[i] in queue:
        queue.remove(referenceString[i])
        queue.append(referenceString[i])
        pageHit += 1
        print(queue)
    else:
        queue.pop(0)
        queue.append(referenceString[i])
        pageMiss += 1
        print(queue)

print(f'Page Hit: {pageHit}     Page Miss: {pageMiss}')
print(f'Page Hit ratio: {pageHit/(pageHit+pageMiss)}')
print(f'Page Miss ratio: {pageMiss/(pageMiss+pageHit)}')

