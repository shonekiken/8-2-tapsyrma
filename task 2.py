with open("mailbox.txt","r") as file:
    for line in file:
        if "Details:" in line:
            number=line.split("rev=")[-1].strip()
            print(number)