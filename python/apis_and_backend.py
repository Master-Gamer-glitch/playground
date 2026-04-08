from fastapi import FastAPI

app = FastAPI()

@app.get("/")
def read_root():
    return {"message" : "Hellowww API worlddd!!"}

#run using uvicorn {filename}:{variable holding fastapi} --reload (auto reloads server upon changes to file)