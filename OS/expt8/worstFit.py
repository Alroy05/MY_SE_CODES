blocks = [100, 500, 200, 300, 600]
process = [212, 417, 112, 426, 80, 2, 900]

m = len(blocks)
n = len(process)
allocated=[-1]*n

for i in range(n):
    index = -1
    worst = min(blocks)

    for j in range(m):
        if blocks[j] >= process[i]:
            if blocks[j] >= worst:
                worst = blocks[j]
                index = j

    if index != -1:            
        allocated[i] = blocks[index]
        blocks[index] = blocks[index] - process[i]
                
    print(f'The blocks after alloting {i+1} process: {blocks}')

print("Process No.     Process Size          Block")
for i in range(n):
    print('   ',i + 1, "         ", process[i],end = "\t\t\t")
    if allocated[i] != -1:
        print(allocated[i])
    else:
        print("Not Allocated")