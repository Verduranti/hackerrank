cases = int(input())

squares = []
i = 1
x = 0
while(x < 10**9):
	x = i*i
	squares.append(x)
	i += 1
answers = []

for i in range (0, cases):
	(left, right) = [int(i) for i in input().split(" ")]
	count = 0
	
	for i in squares:
		if i >= left and i <= right:
			count += 1
		
	answers.append(count)
	
for i in answers:
	print(i)