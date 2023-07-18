t=int(input())
while(t):
    t-=1
    f=0
    c=0
    n=int(input())
    s=input()
    l=['a','e','i','o','u']
    for i in s:
        if i not in l:
            c+=1
            if(c>=4):
                f=1
                break
        else:
            c=0
            
    if(f==1):
        print("NO")
    else:
        print("YES")