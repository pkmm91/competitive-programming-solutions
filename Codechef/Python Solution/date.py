lst1 =['1','2','3','4','5','6','7','8','9','10','11','12','13','14','15','16','17','18','19','20','21','22','23','24','25','26','27','28','29','30','31']
lst2 =['01','02','03','04','05','06','07','08','09','10','11','12']
for i in range(input()):
    str = raw_input()
    lst = str.split('/',str.count('/'))
    r=""
    if (lst[0] in lst1) and (lst[1] in lst2) and (int(lst[2])<=3001 and int(lst[2])>=1):
        if len(lst[2])==1:
            r +='000' + lst[2]
        elif len(lst[2])==2:
            r +='00' + lst[2]
        elif len(lst[2])==3:
            r +='0' + lst[2]
        else:
            r = lst[2]
        print lst1[lst1.index(lst[0])+1]+"/"+lst2[lst2.index(lst[1])]+"/"+r
    else:
        print "Invalid Date"


        
        
