i = 0
while i < 10:
	print(i)
	i += 1
	
	
# Common pitfall: from coursera
# Failure to initialize variables. Make sure all the variables used in the loop’s condition  are initialized before the loop.
# Unintended infinite loops. Make sure that the body of the loop modifies the variables used in the condition, so that the loop will eventually end for all possible values of the variables.
