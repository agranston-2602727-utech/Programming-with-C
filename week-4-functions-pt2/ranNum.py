# 2602727 - Anthony Granston
# Aaron Samuels, Daniel Lugg

import random 

num1 = random.randint(1,9) #returns an integer between 1 and 9
num2 = random.randint(1,9)
num3 = random.randint(1,9)
print(num1,num2,num3)
userNum = int(input("Enter a number between 1 and 9: "))

matchCount = 0
if num1 == userNum:
    matchCount += 1    
if num2 == userNum:
    matchCount += 1
if num3 == userNum:
    matchCount += 1
print(matchCount)    

if matchCount == 0:
    print("No Match")
elif matchCount == 1:
    print("One Match")
elif matchCount == 2:
    print("Two Match")
elif matchCount == 3:
    print("Jackpot! (3 Matches)")
else:
    print("Invalid Match")