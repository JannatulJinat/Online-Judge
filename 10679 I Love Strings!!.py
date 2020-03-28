# To brush up the concept - https://www.youtube.com/watch?v=GTJr8OvyEVQ
#Knuth–Morris–Pratt(KMP) Pattern Matching(Substring search)
#KMP complexity O(m+n)
#Naive Approach complexity O(mn)


def temporaryArray(substring):
    sp = [0 for i in range(len(substring))]
    i= 1
    j=0
    while  i < len(substring):
        if(substring[i] == substring[j]):
            sp[i] = j + 1
            i += 1
            j += 1
        else:
            if j != 0:
                j = sp[j-1]
            else:
                sp[i] = 0
                i += 1
    return sp


def kmpPatternMatching(word,substring):
    sp = temporaryArray(substring)
    i = 0
    j = 0
    while i < len(word) and j < len(substring):
        if (word[i] == substring[j]):
            i += 1
            j += 1
        else:
            if j != 0:
                j = sp[j-1]
            else:
                i += 1
    if j == len(substring):
        return 'y'
    else:
        return 'n'
    return 0


testCase = int(input())
for j in range(testCase):
     word = input()
     num = int(input())
     for i in range(num):
         substring = input()
         res = kmpPatternMatching(word,substring)
         print(res)


#Test Case
# 2
# abcdefghABCDEFGH
# 2
# abc
# abAB

# xyz
# 1
# xyz
