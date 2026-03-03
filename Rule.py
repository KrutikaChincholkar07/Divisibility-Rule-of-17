num = int(input("Enter a number: "))
temp = num

while temp > 100:
    last = temp % 10
    temp = temp // 10 - 5 * last

if temp % 17 == 0:
    print(num, "is divisible by 17")
else:
    print(num, "is not divisible by 17")
