import threading
import queue
import time
queue=queue.Queue(10)
stop=False
def producer():
    global queue,stop
    for i in range (10):
       if not stop:
         if not queue.full():
            item=time.time()
            queue.put(item)
            print("Produced item:",item)
            time.sleep(1)
    print("Producer Stopped")

def consumer():
   global queue,stop
   while not stop:
       if not queue.empty():
           item=queue.get()
           print("Consumed item:",item)
           time.sleep(3)
   print("Consumer Stopped")

producer_thread=threading.Thread(target=producer)
consumer_thread=threading.Thread(target=consumer)
producer_thread.start()
consumer_thread.start()
time.sleep(10)
stop=True