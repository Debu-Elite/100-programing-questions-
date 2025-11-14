def add(a, b):
	return a+b

def sub(a,b):
  return a-b

def mul(a,b):
	return a*b
def div(a,b):
	return a/b


loop =1
operator=None
while(loop):
	loop=int(input("for exit type 0 or continue type 1"))
	print(loop)
	one = int(input("enter number 1: "))
	operator = input("enter operator (+,-,*,/): ")
	two = int(input("enter number 2: "))

	match operator:
		case '+':
			print(add(one, two))
		case '-':
			print(sub(one, two))
		case '*':
			print(mul(one, two))
		case '/':
			print(div(one, two))
		case _:
			print("wrong operator")
