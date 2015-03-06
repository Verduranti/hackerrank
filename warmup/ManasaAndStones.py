cases = int(input())
answers = []

for i in range(0, cases):
	numStones = int(input())
	a = int(input())
	b = int(input())
	
	if a > b:
		temp = a
		a = b
		b = temp
	
	possibles = []

	if a == b:
		possibles.append(a*(numStones - i - 1) + b * (i));
		answers.append(possibles)
	else:
		for i in range(0, numStones):
			possibles.append(a*(numStones - i - 1) + b * (i));
		answers.append(possibles)
	
for i in answers:
	print(" ".join(str(j) for j in i))