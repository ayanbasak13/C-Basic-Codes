def permutations(string):
    """Create all permutations of a string with non-repeating characters
    """
    permutation_list = []
    if len(string) == 1:
        return [string]
    else:
        for char in string:
            for a in permutations(string.replace(char,"")) :
                permutation_list.append(char+a)

            #[permutation_list.append(char + a) for a in permutations(string.replace(char, ""))]
    return permutation_list

print(permutations("ABCDE"))




'''from itertools import permutations
l = list(permutations(range(1, 4)))
print l'''