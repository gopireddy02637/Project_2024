x="Gopi"
print(x[1])

#looping through string 

for i in "Gopi":
    print(i)
#len(x)

#check occurance of words

x="this will check in word is there or not"
if 'willl' in x:
    print(True)
else:
    print(False)

#slicing

x="gopi reddy"
print(x[2:3])
print(x[:3])
print(x[0:])
print(x[-4:-1])
print(x[1:4:2])
print(x[:-1])
print(x[-1::-1])
print(x[::-1])

print("----------------------------")
#modifying sting
# Upper()
a="Gopi"
print(a.upper())        #captial output

#Lower
print(a.lower())     # lower alphabet

#spcae remove begnning and end
a=" gopi redddy i love sunaina "
print(a.strip())

#Replace
a="Gopi"
print(a.replace("G","2"))
print("===========================")

#split
a="gopi redddy i love sunaina"
print(a.split(" "))

#f-string
#used to add number and text
b=32
a=f"gopi redddy i love sunaina from {b}"

print(a)
print(type(a))
print("Gopi redddy i love sunainafrom",b)

#escape charata \ is 
a="gopi redddy i love \"you\" sunaina"
print(a)
"""
capitailze() = phela letter ko capitalise krdena

a="gopi redddy i love sunaina "
a.count("gopi")  return number of times this word occured in a
cout(value,start,end)
count("gopi",10,20)

encode() txt encode into conversions

endswith() = tells that return i will pass a value and return ture if it end with that
endswith(value,start,end) 
startswith(value,start,end) retrun ture if it stsart with provided value

find() return index by providing value into it retutrn -1 if not found
index() return exceptionsif not found same as find()





"""
print("--------------------")

#Join() method
x=("gopi","sunaina","married")
y=" ".join(x)
print(y)

#in case of dictonary
a={"name:india","country:odisa"}
print(a)
s="gopi"
y=s.join(a)
print(y)