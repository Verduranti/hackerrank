def findGCD(x, y):
	if(y == 0):
		return x
	return findGCD(y, x%y)
	
cases = int(input())
answers = []
for i in range(0, cases):
	listsize = int(input())
	list = [int(j) for j in input().split(" ")]
	
	for j in range(0, listsize):
		for k in range(j+1, listsize):
			if findGCD(list[j], list[k]) == 1:
				answers.append("YES")
				break
		else:
			continue
		break
	if len(answers) < i+1:
		answers.append("NO")
			
for i in answers:
	print(i)