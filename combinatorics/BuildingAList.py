import itertools

cases = int(input())
answers = []	

for i in range(0, cases):
	numChars = int(input())
	myString = input()
	myList = []
	for j in range(1, numChars+1):
		myList.extend("".join(k) for k in itertools.combinations(myString,j))
	answers.extend("".join(k) for k in sorted(myList))
		
for i in answers:
	print(i)
	
