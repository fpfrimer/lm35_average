# Código exemplo do LM35 com o Tiva C Series TM4C123G
Código de exemplo do TIVA C que faz a leitura do sensor LM35. O sensor está conectado na entrada analógica 11 (A11) do TIVA e o código permite fazer a média móvel do sinal para redução de ruídos. Adicionalmente, o usuário pode configurar o número de médias (SIZE) e o período de envio de dados (PERIOD). A interface foi feita em Labview (interface.vi) e permite a visualização do valor lido pelo sensor através de um termômetro e um gráfico temporal. 

## Adaptação para Arduino
Como o tiva é muito mais poderoso que o arduino, alguns cuidados devem ser tomados ao tentar adaptar o código. O principal desafio e a limitada quantidade de memória de dados. Recomenda-se diminuir o número de médias e/ou mudar algumas variáveis de "long" para "int".
