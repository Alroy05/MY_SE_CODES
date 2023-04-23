def swap(i, j, A): 
    A[i],A[j] = A[j],A[i]  
# selection sort algorithm    
def selection_sort(A):
    n = len(A)
    for i in range(n-1):
        index = i
        for j in range(i+1, n):
            if A[j] < A[index]:
                index = j
        swap(i, index, A)
        print("Pass "+str(i+1)+": ",A)
    print("Sorted List: ", A)

A = list(input("Enter the list elements: "))
selection_sort(A)

