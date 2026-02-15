months = [
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
]

def main():

 while True:
    date = input("Date: ").strip()

    try:
        #numeric first mm/dd/yyyy
        month,day,year = date.split("/")
        month = int(month)
        day = int(day)
        year = int(year)
        if 0 <= month <= 12 and 0 <= day <= 31:
            print(f"{year:04}-{month:02}-{day:02}")
            exit()

    except ValueError:
       pass

    #Textual September 9, 1970
    try:
        month, rest = date.split(" ", 1)
        day, year = rest.split(",")
        year = int(year.strip(" "))
        day = int(day)
        for mon in months:
            if mon == month:
                if 1 <= day <= 31:
                    month = months.index(mon) + 1
                    print(f"{year:04}-{month:02}-{day:02}")
                    exit()
    except ValueError:
       pass

main()