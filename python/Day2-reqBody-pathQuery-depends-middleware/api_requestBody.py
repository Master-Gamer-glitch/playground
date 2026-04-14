from pydantic import BaseModel
from fastapi import FastAPI

app = FastAPI()

#BaseModel validates the data received and throws error otherwise.
class Item(BaseModel):
    name: str
    price: float

@app.post("/items")
def create_item(item: Item):
    return item