import itertools

lis = [1,2,3,4]
for pair in itertools.combinations(lis, 2):
    print(pair)

# (1, 2)
# (1, 3)
# (1, 4)
# (2, 3)
# (2, 4)
# (3, 4)