import os
from multiprocessing import Process,current_process

def square(number):
    sq_number=number*number
    process_ID = os.getpid()
    # process_name = current_process().name
    # print(f'The name of the process is: {process_name}')
    print(f'The process ID is: {process_ID}')
    print(f'The square of {number} is {sq_number}')

if __name__ == '__main__':
    numbers = [1,2,3,4]
    processes = []
    for number in numbers:
        process = Process(target=(square),args=(number,))
        processes.append(process)
        process.start()


    