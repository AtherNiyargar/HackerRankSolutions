num = int(input())

blank_space = int((((num*2)-1) - num) / 2)

center_line = int((num/2) + 1)

H_char = 'H'

for i in range(num):
    print(H_char.center(num * 2 - 1,' '))
    H_char += "HH"

for i in range(num + 1):
    print(f"{' '*blank_space}{'H'*num}{' '*(num*3)}{'H'*num}")

for i in range(center_line):
    print(f"{' '*blank_space}{'H'*num*5}")

for i in range(num + 1):
    print(f"{' '*blank_space}{'H'*num}{' '*(num*3)}{'H'*num}")

H_char = H_char[:-2]
for i in range(num):
    print(f"{' '*num*4}{H_char.center(num*2-1)}")
    H_char = H_char[:-2]
