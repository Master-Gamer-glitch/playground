from fastapi import FastAPI, Depends
from pydantic import BaseModel

app = FastAPI()

#root fn
@app.get("/")
def read_root():
    return "HELLOW MIDDLEWARE"

#middleware: wrapper around ur logic

#middleware runs before AND after the request related fn is called. (like a security checkin at airport)
@app.middleware("http")
async def log_requests(request, call_next):

    print("Request received")

    #here it waits for the request handler fn to execute and after its done running it will print response sent.
    response = await call_next(request)

    #call_next: pass the control to FastAPI for handler fn execution

    print("Response sent")
    return response