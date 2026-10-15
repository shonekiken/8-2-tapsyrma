with open("mailbox.txt","r") as file:
    for line in file:
        if "with ESMTP id" in line:
            number=line.split("with ESMTP id")[1].split(";")[0].strip()
            print(number)