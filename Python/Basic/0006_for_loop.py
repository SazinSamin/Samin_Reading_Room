# if we give 1 parameter to the range function it will iterate to that parameter, incrementing by 1.
# if we give 2 paramter it will start from that parameter, to another parameter, incrementing by 1.
# if we give 3 paramter it will incrementing the value by that paramter.

# in default range funciton start from 0, end just before the number of second argument.


for i in range(2, 20):
	print(i)

for i in range(10):
	print(i)
	
for i in range(5, 100, 10):
	print(i)


fruits = ['apple', 'orange', 'mango', 'jackfruit']
for fruit in fruits:
	print(fruit);
	
