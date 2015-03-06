cases = int(input())
answers = []

for i in range(0, cases):
	(students, minStu) = [int(i) for i in input().split(" ")]
	arrivalTimes = [int(i) for i in input().split(" ")]
	arrivalTimes.sort()

	if arrivalTimes[minStu-1] > 0:
		answers.append("YES")
	else:
		answers.append("NO")
		
for i in answers:
	print(i)