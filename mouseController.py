from pynput.mouse import Button, Controller
import serial
import sys

mouse = Controller()
_serial = serial.Serial('COM6', 9600)

# mouse.position
# mouse.click(Button.right//left, 1)
# mouse.press(Button.left)
# mouse.realese(Button.left)


while True:
  try:
    data = _serial.readline().strip().decode('utf-8')
    if(len(data) > 1 and data != "press" and data != "release"):
      coord = data.split(",")

      x = int(coord[0])
      y = int(coord[1])
      print(x, y)

      mouse.move(x,y)
    elif(data == "press"):
      mouse.press(Button.left)
    elif(data == "release"):
      mouse.release(Button.left)
    #print(data)
  except:
    print(sys.exc_info())
    break

# print(mouse.position)
# mouse.move(20,20)