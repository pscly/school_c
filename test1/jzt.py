

in_1_n = int(input('>>').strip(''))
 
for i in range(in_1_n):
    print(" "*(in_1_n-i), end='')
    print("*"*((i*2)+1))
