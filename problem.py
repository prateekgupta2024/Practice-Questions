s=input()
c=input()
l3=[]
l1=list(s.strip(" "))
l2=list(c.strip(" "))
for i in l1:
    j=i.lower()
    while((i in l2) or (j in l2)):
        if(i.isdigit()):
            l3.append(i)
        else:
            if(i in l2):
                print(i,end="")
            elif(j in l2):
                print(j,end="")
        if(i in l2):
            l2.remove(i)
        else:
            l2.remove(j)
for i in l3:
    print(i,end="")