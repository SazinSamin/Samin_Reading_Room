# if we give 1 parameter to the range function it will iterate to that parameter, incrementing by 1.
# if we give 2 parameter it will start from that parameter, to another parameter, incrementing by 1.
# if we give 3 parameter it will incrementing the value by that parameter.

# in default range function start from 0, end just before the number of second argument.


for i in range(2, 20):
	print(i)

for i in range(10):
	print(i)
	
for i in range(5, 100, 10):
	print(i)


fruits = ['apple', 'orange', 'mango', 'jackfruit']
for fruit in fruits:
	print(fruit);
	
# nested loop:

foods = ['apple', 'rice', 'chicken']
meals = ["breakfast", "launch", "dinner"]

for food in foods:
    for meal in meals:
        print(food + " " + meal)
	
	
	
	
# Common pitfalls: from coursera
# Forgetting that the upper limit of a range() isn’t included.
# Iterating over non-sequences. Integer numbers aren’t iterable. Strings are iterable letter by letter, but that might not be what you want.
