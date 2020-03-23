testCase = int(input())
for j in range(testCase):
    word = input()
    list1 =[]
    counts = {}
    for i in word:
        if i in counts:
            counts[i] += 1
        else:
            counts[i] = 1

    for key in counts:
        if(key == "A"):
            list1.append(counts["A"] / 3)
        elif(key == "G"):
            list1.append(counts["G"] / 1)
        elif (key == "I"):
            list1.append(counts["I"] / 1)
        elif (key == "M"):
            list1.append(counts["M"] / 1)
        elif (key == "R"):
            list1.append(counts["R"] / 2)
        elif (key == "T"):
            list1.append(counts["T"] / 1)

    if (len(list1) != 6):
        print(0)
    else:
        print(int(min(list1)))