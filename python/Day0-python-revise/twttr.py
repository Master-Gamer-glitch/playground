def main():
    inp = input("Input: ").lstrip(" ")
    result = ""

    for ch in inp:
        if ch.lower() not in "aeiou":
            result += ch

    print("Output:", result)

main()
