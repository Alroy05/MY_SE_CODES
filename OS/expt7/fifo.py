replace = 0
numberPageSlot = 3
queue = [-1]*numberPageSlot
referenceString = [3, 8, 2, 3, 9, 1, 6, 3, 8, 9, 3, 6, 2, 1, 3]
pageMiss = 0
pageHit = 0

for i in range(len(referenceString)):
    if referenceString[i] in queue:
        pageHit += 1
        print(f"Page Queue after {i+1} page: {queue}")
    elif referenceString[i] not in queue:
        pageMiss += 1
        queue[replace] = referenceString[i]
        replace = (replace + 1) % numberPageSlot
        print(f"Page Queue after {i+1} page: {queue}")
       
print(f"Page Miss: {pageMiss}")
print(f"Page Hit: {pageHit}")
print(f"Hit Ratio: {pageHit/(pageHit+pageMiss)}")
print(f"Miss Ratio: {pageMiss/(pageHit+pageMiss)}")