import sys

words = []
word = ""
max_len = 0

for i in range(5):
    words.append(sys.stdin.readline().strip())

    if len(words[i]) > max_len:
        max_len = len(words[i])

for i in range(5):
    words[i] += (" " * (max_len - len(words[i])))

for i in range(max_len):
    for j in range(5):
        word += words[j][i]

word = word.replace(" ", "")
sys.stdout.write(word)