import serial
conexao = serial.Serial('COM3', 9600)

file = open("C:/Users/Matheus/Desktop/OpenCV_3_License_Plate_Recognition_Python-master/PLACA.txt", "r")
#print(file.read())
placa = file.read()

if(placa == "SIM"):
    print(placa)
    print("Placas Iguais!!")
else:
    print(placa)
    print("Placas Diferentes!!")
while True:
    
    if (placa == "SIM"):
        print(".")
        conexao.write(b'C')
    else:
        conexao.write(b'D')
result = conexao.readline()
result = result.decode("utf-8")
print("Resultado:", result[:(len(result)-2)], "\n")
conexao.close()
   
