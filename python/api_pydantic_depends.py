from fastapi import Depends, FastAPI

app = FastAPI()

def get_token():
    return "fake-token"

#Depends actually injects the code from get_token() function into the provided variable (it is called before the request is handled.)
@app.get("/items")
def read_items(token: str = Depends(get_token)):
    return {"token": token}