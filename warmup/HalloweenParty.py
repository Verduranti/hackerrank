cases = int(input())

brownieBytes = []

for i in range(0, cases):
	cuts = int(input())
	bytes = cuts//2 * (cuts//2 + cuts%2)
	brownieBytes.append(bytes)
	
for i in brownieBytes:
	print(i)