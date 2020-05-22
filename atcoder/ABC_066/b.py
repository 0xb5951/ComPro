word = input()
word = word[:-2]

for i in range(len(word)):
    if word[:int(len(word)/2)] == word[int(len(word)/2):]:
        break
    word = word[:-2]

print(len(word))