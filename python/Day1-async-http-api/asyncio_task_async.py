import asyncio
import time

#running the same 3 tasks this time using coroutine object. [event looop]
async def task(name):
    print(f"Starting {name}")
    await asyncio.sleep(2)
    print(f"Ending {name}")

async def main():
    
    start = time.perf_counter()

    await asyncio.gather(

        task("A"),
        task("B"),
        task("C"),

    )
    end = time.perf_counter()
    print(f"Time: {end - start:.2f} seconds")

asyncio.run(main())