cases = int(input())
eats = []

def residualCocoa(chocolates, wrappers):
	if chocolates//wrappers == 0:
		return 0
	return chocolates//wrappers + residualCocoa(chocolates//wrappers +chocolates%wrappers, wrappers)

for i in range(0,cases):
	(money, cost, wrappers) = [int(i) for i in input().split(" ")]
	#eats.append(money//cost + residualCocoa(money//cost, wrappers))
	print(money//cost + residualCocoa(money//cost, wrappers))
	
#for i in eats:
#	print(i)
	
