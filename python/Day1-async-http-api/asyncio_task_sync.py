import asyncio
import time

#Running 3 tasks in sync style
async def task(name):
    print(f"Start {name}")
    await asyncio.sleep(2)
    print(f"End {name}")

async def main():
    start = time.perf_counter()

    await task("A")
    await task("B")
    await task("C")

    end = time.perf_counter()

    print(f"Time: {end - start:.2f} seconds")

asyncio.run(main())