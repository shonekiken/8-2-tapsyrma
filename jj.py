import re

f=open("mailbox.txt","r")
lines=f.readlines()
fout=open("output1.txt","w")
for line in lines:
    if "Received" in line:
        ip=re.findall(r'\d+\.\d+\.\d+\.\d+',line)
        for i in ip:
            fout.write(i+"\n")
            print(i)
