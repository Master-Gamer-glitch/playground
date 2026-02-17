def main():
    amt = 50
    while(amt > 0):
        amt = calc(amt)


def calc(amt):
    print("Amount due: ", amt, sep="")
    inp = int(input("Insert Coin: "))
    if(inp == 5 or inp == 10 or inp == 25):
        amt = amt - inp
        if(amt <= 0):
            print("Change Owed: ", amt*-1, sep="")
    return amt

main()
