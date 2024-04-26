import subprocess
import os
import time 
import tqdm

time_max=0

for i in tqdm.trange(1000):
    start_time=time.time()

    os.system("./task2>/dev/null")
    end_time=time.time()

    time_spent=end_time- start_time
    if   time_spent>time_max:
         time_max=time_spent
print(f"Maximum time is {time_max:,.3f} seconds")
