import asyncio

async def test(name):
    print(f'start {name}')
    await asyncio.sleep(2)
    print(f'end {name}')
    
async def main():
    await asyncio.gather(
        test("A"),
        test("B"),
        test("C")
    )
    
asyncio.run(main())

# runs test A: waiting stage encountered 
# => runs task B: waiting stage encountered
# => runs task C: waiting stage encountered
# nothing more in "ready" state => hence event loop will wait
# once done, since wait times of all 3 tasks was same, it will go to "ready" stage with a minor delay A then B then C.