import re
'''
pattern = r"Cookie"
sequence = "Cookie"


if re.match(pattern, sequence):
  print("Match!")
else: 
    print("Not a match!")
    



pattern = r"Cookie"
sequence = "Co.k.e"


print(re.search(sequence,pattern).group())



# \w - Lowercase w. Matches any single letter, digit or underscore.
print(re.search(r'Co\wk\we', 'Cookie').group())



# \W - Uppercase w. Matches any character not part of \w (lowercase w)
print(re.search(r'C\Wke', 'C@ke').group())



# \s - LOWERCASE s. Matches a single whitespace character like: space, newline, tab, return
print(re.search(r'Eat\scake', 'Eat cake').group())



# \S - UPPERCASE s. Matches any character not part of \s (lowercase s).
print(re.search(r'Cook\Se', 'Cookie').group())

'''



# \t -     LOWERCASE t-----> MATCHES TAB

# \n - LOWERCASE n ---------> MATCHES NEW LINE

# \r - LOWERCASE r,MATCHES RETURN




'''
# \d - LOWERCASE d.MATCHES DECIMAL DIGITS 0-9
print(re.search(r'c\d\dkie', 'c00kie').group())




# ^ - CARET. Matches a pattern at the START OF THE STRING
print(re.search(r'^Eating cake', 'Eating cake is not good for obesity').group())

    


# $ - Matches a pattern at the END OF STRING
print(re.search(r'for obesity$', 'Eating cake is not good for obesity').group())
'''





# [abc] - Matches a or b or c.


''' [a-zA-Z0-9] - Matches any letter from (a to z) or (A to Z) or (0 to 9).
 Characters that are not within a range can be matched by complementing the set.
 If the first character of the set is ^, all the characters that are not in 
 the set will be matched.
'''

'''
print(re.search(r'Number: [0-6]', 'Number: 5').group())
print(re.search(r'Number: [^5]', 'Number: 3').group())
print(re.search(r'[0-9]', 'Number3').group())
'''



'''

# \A - UPPERCASE a. Matches only at the start of the string. Works across multiple lines as well.
print(re.search(r'\A[A-E]ookie', 'Cookie').group())




# \b - Lowercase b. Matches only the beginning or end of the word.
print(re.search(r'\b[A-E]ookie', 'Cookie').group())

'''







'''
\ - BACKSLASH. If the character following the backslash is a recognized escape character,
 then the special meaning of the term is taken. 
 For example, \n is considered as newline.
 However, if the character following the \ is not a recognized escape character, 
 then the \ is treated like any other character and passed through.

'''
'''
# This checks for '\' in the string instead of '\t' due to the '\' used 
print(re.search(r'Back\\stail', 'Back\stail').group())

# This treats '\s' as an escape character because it lacks '\' at the start of '\s'
print(re.search(r'Back\stail', 'Back tail').group())
'''




'''
# + - Checks for one or more characters to its left
# + - Checks for one or more characters to its left.
print(re.search(r'Co+kie', 'Cooookie').group())




# * - Checks for zero or more characters to its left.
# Checks for any occurrence of a or o or both in the given sequence
print(re.search(r'Ca*o*kie', 'Caaaaookie').group())






# ? - Checks for exactly zero or one character to its left.
# Checks for exactly zero or one occurrence of a or o or both in the given sequence
print(re.search(r'Colou?r', 'Color').group())
'''









# {x} - Repeat exactly x number of times.

# {x,} - Repeat at least x times or more.

# {x, y} - Repeat at least x times but no more than y times.

print(re.search(r'\d{9,10}', '0987654321').group())




print("".join(reversed('Ayan')))

































