from emoji import emojize

def main():
    arg = input("Input: ").strip()
    print(emojize(arg, language="alias"))

main()
