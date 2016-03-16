a = [18,35,6,80,15,21]
max_endhere = max_endfar = 0
count = 0
for i in a[0:]:
        max_endhere = max(i, max_endhere + i)
        max_endfar = max(max_endfar, max_endhere)
        count = count +1
print max_endfar,count
