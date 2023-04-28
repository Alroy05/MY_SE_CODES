blocks = [100, 500, 200, 300, 600]
process = [212, 417, 112, 426]
m = len(blocks)
n = len(process)
allocation = [-1]*n

for i in range(n):
    for j in range(m):
        if blocks[j]>=process[i]:
            chosen = blocks[j]
            allocation[i] = chosen
            blocks[j] = blocks[j] - process[i]
            break
    print('memory blocks after ',i+1,' process -->',blocks)

print()
print("Process No.   Process Size              Block")
for i in range(n):
    print('     ',i + 1, "      ", process[i],end = "\t\t\t")
    if allocation[i] != -1:
        print(allocation[i])
    else:
        print("Not Allocated and will wait")