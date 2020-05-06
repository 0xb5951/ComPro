word_list = input()

word_dict = {}

for word in word_list:
    if word in word_dict:
        word_dict[word] +=1
    else:
        word_dict[word] = 1

Flag = 'Yes'
for key_count in word_dict.values():
    if key_count % 2 != 0:
        Flag = 'No'

print(Flag)
