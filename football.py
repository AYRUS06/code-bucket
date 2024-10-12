    n=input()
    k=0
    l=0
    t=0
    c=''
    for i in n:
        if i=='0':
            k=1
        elif i=='1':
            t=1


    if "1111111" or "0000000" in n:
        l=1

    if l==1 and k==1 and t==1:
        c='YES'
    else:
        c="NO"


