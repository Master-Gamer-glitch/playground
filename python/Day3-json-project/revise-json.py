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
# should always be in try-except wrapper since u cant trust anyone in this world
try:
    data = json.loads(json_data)
    print(data)
except json.JSONDecodeError:
    print("i knew i coudnt trust you.")