import keyword

l = keyword.kwlist
#print(type(l))

res:str = ""
print(len(keyword.kwlist))
for i in range(len(l)):
    temp = str(l[i])
    temp = f"\"{temp}\""
    if i != len(l) - 1:
        temp = temp + "|"
    res += temp

print(res)

print('''''
sdjnfsdfk 
''')