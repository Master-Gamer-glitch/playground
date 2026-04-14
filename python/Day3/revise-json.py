import json

#python dict (nested)
data = {
    "user" : {
        "name" : "Aryan",
        "skills" : ["python", "FastAPI"]
    }
}

#dump string, load string fns

#convert to JSON (serialization)
json_data = json.dumps(data)
print(json_data)

#convert to python dict (deserialization)
data = json.loads(json_data)
print(data)