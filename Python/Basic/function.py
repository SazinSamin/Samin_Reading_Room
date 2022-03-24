# define function with "def" keyword, then function name.
# after function name use parenthesis for arguments.

# intendation is consider the body of the function. After the :(colon), the funciton body get started
# and we have to give a right intendation to tell python that this lines or code inside the function.
# the indendation can be 2, 4, ... spaces, but must be consistance.
# Where the intendation get off, the function body close.

# python can also return multiple values.

def add_10(a, b):
        return a + 10, b + 10;
    
# use multiple values to catch mutiple returned values.
a1, a2 = add_10(10, 20);
print(a1);
print(a2);
