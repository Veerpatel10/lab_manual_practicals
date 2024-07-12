def hextorgb(hex):
    rgb = []
    for i in (0, 2, 4):
        decimal = int(hex[i:i+2],16)
        rgb.append(decimal)
    return tuple(rgb)
str1 = input("Enter the 6-digit RGB color code : ")
rgb1 = hextorgb(str1)
print("RGB :",rgb1)