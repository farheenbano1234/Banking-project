import pyautogui
import time

msg = input("hello: ")
n = input("20 ?: ")

print("t minus")

count = 5
while(count != 0):
	print(count)
	time.sleep(1)
	count -= 1

print("Fire in the hole!!!")

for i in range(0,int(n)):
	pyautogui.typewrite(msg + '\n')