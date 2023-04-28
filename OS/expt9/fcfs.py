reqSequence = [45, 21, 67, 90, 4, 50, 89, 52, 61, 87, 25]
InitialHead = 50
currentHead = InitialHead

totalSeek = 0

for i in range(len(reqSequence)):
    destination = reqSequence[i]
    totalSeek = totalSeek + abs(destination-currentHead)
    currentHead = destination
    
print(f"Total Seek: {totalSeek}")
# in fcfs, the order will be same as request sequence. 
print(f"Order: {reqSequence}")