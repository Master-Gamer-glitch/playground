from fastapi import FastAPI, Depends
from pydantic import BaseModel

app = FastAPI()

#mission: Setup CRUD using native caching

#define data body
class Item(BaseModel):
    item_id: int
    title: str
    completed: bool

#init storage
storage = []

#init root
@app.get("/")
def read_root():
    return "Tasky is live!"

#init C
@app.post("/items")
def create_rec(item: Item):
    storage.append(item)
    return item

#init R
@app.get("/items/{item_id}")
def get_item(item_id: int):
    try:
        return f"{storage[item_id-1]}"
    except:
        return "invalid item id"

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
    