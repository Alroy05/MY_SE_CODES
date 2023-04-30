import time
from multiprocessing import Process,Value,Lock

def add_no(total,lock):
    for i in range(100):
        time.sleep(0.01)
        lock.acquire()
        total.value += 5
        lock.release()

def sub_no(total,lock):
    for i in range(5):
        time.sleep(0.01)
        lock.acquire()
        total.value -= 5
        lock.release()

if __name__ == '__main__':
    total = Value('i',500)
    lock = Lock()
    process1 = Process(target=add_no,args=(total,lock))
    process2 = Process(target=sub_no,args=(total,lock))

    process1.start()
    process2.start()

    process1.join()
    process2.join()

    print(total.value)