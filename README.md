# 🚗 Automatic Garage Door

## 📖 Sobre o projeto
O Automatic Garage Door tem o objetivo de ler placas de veículos para o acionamento automático de portão de residências.
Isso é possível por meio de uma leitura da placa que compara com uma placa já colocada no sistema e assim se as placas são iguais, um servo motor é acionado em um ângulo para representar o portão de uma garagem sendo aberta. Caso as placas forem distintas, uma led vermelha é acionada para indicar erro.
Esse projeto foi um trabalho desenvolvido durante a matéria de [Tópicos Especiais de Software](https://github.com/Carolys/course-information-systems/tree/master/special-software-topics)** da graduação de Sistemas de Informação, em novembro de 2020.

## 🚀 Tecnologias
- [Arduino](https://www.arduino.cc/en/Main/software)
- [Python](https://www.python.org) 
- [OpenCV](https://opencv.org)

## 🔌 Componentes eletrônicos
1 Arduino
1 Led (vermelha)
1 Servo Motor (foi utilizado no projeto o Micro Servo Tower Pro 9g Sg-90)
1 Webcam

## ⚡ Passos do desafio

1. Ler a placa do carro em movimento ou em imagem fixa.
2. A partir da imagem separada com a placa (ROI) fazer o tratamento para escala de cinza / preto e branco.
3. Utilizando a técnica demonstrada OCR ou a técnica indicada Tesseract, irá ler a placa e reconhecerá: letra/número.
4. Uma vez reconhecida a placa verificar se é uma placa registrada no próprio Python, Se sim enviar o comando para o Arduino acionar o servo motor para simular a abertura do portão, senão demonstrar que esta placa não está cadastrada e ligar um led vermelho para indicar erro!

## ⚙️ Funcionamento

Para que tudo funcione de forma correta, siga os passos a seguir:
1. É preciso ter os componentes eletrônicos citados anteriormente e colocar nos pinos corretos que estão no arquivo "Cdg_Arduino.ino". 
2. Instale as bibliotecas utilizadas no projeto. Caso não tenha facilidade, uma indicação é utilizar a IDE Pycharm. Isso facilitará bastante o manuseio do projeto.
3. Altere os caminhos que são salvos as imagens e feito a leitura para o caminho da sua pasta nos arquivos python.
4. Certifique-se de abrir o arquivo Cdg_Arduino.ino no ArduinoIDE e compile ele.
5. Prepare sua webcam e clique para rodar o arquivo "captura_placa.py". Assim, aparecerá uma guia com a visualização da sua webcam e se tiver alguma placa no campo de visão dela, ele identificará e indicará a mensagem "Scan saved", que indica que a imagem da placa foi salva com sucesso! Se quiser verificar, vá para a pasta "LicPlateImages", e verifique se sua placa foi capturada corretamente. O programa salva uma versão original e uma versão com tratamento para escala de cinza / preto e branco. (Nomes dos arquivos: arquivo original - "PlacaCapturada.jpg"; arquivo cinza - "PlacaCapturadaCinza.jpg")
6. Rode o arquivo "Main.py" para que seja realizado a leitura dos caracteres da sua placa salva. Várias janelas serão abertas para apresentar o sistema reconhecendo e tratando a imagem e no shell do python te mostrará se as placas são distintas ou não, e os valores de cada placa (a placa salva no python e a placa lida). É importante salientar que para que você possa modificar o valor da placa do python na linha 65 do mesmo arquivo rodado e alterar o valor.
7. O arquivo anterior gerará também um arquivo .txt para que seja enviado esse valor seja comunicado no ArduinoIDE e assim ativar ou não os componentes eletrônicos. Dessa forma, rode o arquivo "ComunicaçãoUNO.py" e ele comunicará o arduino. Verifique se o led foi aceso ou o servo motor moveu e sucesso!

Para uma melhor visualização do projeto em funcionamento, assista os seguintes vídeos:
- [Funcionamento do projeto para a comparação de uma placa correta](https://www.youtube.com/watch?v=nLU-K-XNXCE)
- [Funcionamento do projeto para a comparação de uma placa incorreta](https://www.youtube.com/watch?v=pp9qDowOIX8)

Esse projeto foi feito com base no projeto **[OpenCV 3 License Plate Recognition Python](https://github.com/MicrocontrollersAndMore/OpenCV_3_License_Plate_Recognition_Python)** que também possui um **[vídeo](https://www.youtube.com/watch?v=fJcl6Gw1D8k&ab_channel=ChrisDahms)** bem explicativo sobre o projeto do **[Chris Dahms](https://github.com/MicrocontrollersAndMore)**. :)

---

<p align="center">Orientação do professor Leandro Vasconcelos</p>
<p align="center">Desenvolvido com 💜 por Carolina Yasue, Matheus Stella, Luís Kosowski e Camila Rody</p>
