x=1

def fun():
    print(1+x)

fun()

def fun2():
    global y
    y=3
fun2()

print(3+y)