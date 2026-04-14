from fastapi import FastAPI, Depends, HTTPException
from pydantic import BaseModel

app = FastAPI()

#mission: Setup CRUD using native caching

#define data body
class Item(BaseModel):
    title: str
    completed: bool

#init storage
storage = []

#init root
@app.get("/")
def read_root():
    return "Tasky is live!"

#init C
@app.post("/items", status_code=201)
def create_rec(item: Item):
    item_dict = item.dict()
    item_dict["id"] = len(storage) + 1
    storage.append(item)
    return item

#init R
@app.get("/items/{item_id}")
def get_item(item_id: int):
    if item_id > len(storage) or item_id <= 0:
        raise HTTPException(status_code=404, detail="Item not found")
    
    return storage[item_id-1]

#init U
@app.put("/items/{item_id}")
def update(item_id: int, item: Item):
    try:
        print(storage[item_id-1])
        storage[item_id-1] = item
        return f"{storage[item_id-1]}"

    except:
        return "invalid"

#init D
@app.delete("/items/{item_id}")
def del_rec(item_id: int):
    try:
        print(f"{storage[item_id-1]}")
        storage.pop(item_id-1)
        return "Success"

    except:
        return "ERROR!"
    