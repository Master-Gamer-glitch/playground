from fastapi import FastAPI

app = FastAPI()

@app.get("/")
def read_root():
    return {"message" : "HALLOW WORLDD AGAIN"}

#path param: required params
@app.get("/items/{item_id}")
def get_item_id(item_id: int):
    return {"item_id" : item_id}

#query param: optional params
@app.get("/items")
def get_items(limit: int):
    return {"limit" : limit}