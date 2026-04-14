import asyncio

async def task():
    print("Start")
    await asyncio.sleep(2)
    print('End')
    
# asyncio.run(task())
t = task()
print(t)
# task returns a coroutine object.
# theres no asyncio to create an event loop which is capable to execute the coroutine object
# hence if u try task() it will result in RuntimeError.

#output: coroutine object