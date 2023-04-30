
n = 5    # n=number of processes
m = 3    #m = number of resources

allocated = [[0, 1,0], [2 ,0 ,0], [3, 0, 2], [2, 1, 1], [0, 0, 2]]
maxreq = [[7, 5, 3], [3, 2, 2], [9, 0 ,2], [4, 2, 2], [5, 3, 3]]
available = [[3, 3, 2]]
safeSeq = []

need = [[(maxreq[i][j]-allocated[i][j])for j in range(m)]for i in range(n)]
totalresources = [[0,0,0]]

a = available[0][0]
b = available[0][1]
c = available[0][2]

for i in range(n):
    a = a + allocated[i][0]
    b = b + allocated[i][1]
    c = c + allocated[i][2]

totalresources = [[a,b,c]]

while True:
    if available == totalresources:
        if len(safeSeq) == n:
            print(f'Safe sequence is: {safeSeq}')
            break
        else:
            print("Safe sequence is not possible")

    satisfied = [0 for i in range(n)]

    for i in range(n):
        f=0
        for j in range(m):
            if(need[i][j]<=available[0][j]):
                f=1
            else:
                f=0
                break
    
        if f == 1 and i not in safeSeq:
            satisfied[i] = 1

    if 1 not in satisfied:
        print('Safe sequence not possible')
        break

    ind = satisfied.index(1)
    safeSeq.append(ind)
    available = [[available[0][j] + allocated[ind][j] for j in range(m)]]

print(totalresources)
       
  
    
